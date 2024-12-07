WORK_DIR := $(shell pwd)
BUILD_DIR = build
TEST_BIN_PATH = ./$(BUILD_DIR)/tests/run_tests
DEB_DIR = debian
DEB_NAME := $(shell grep Package: $(DEB_DIR)/control | cut -d ':' -f 2-)
DEB_BIN_DIR := $(shell echo $(DEB_DIR)/$(DEB_NAME)/usr/local/bin | tr -d ' ')
DEB_CTRL_DIR := $(shell echo $(DEB_DIR)/$(DEB_NAME)/DEBIAN | tr -d ' ')

# the "project_name.txt" file is generated on some clauses, such as "info", and comes from the project name in the top-level CMakeLists.txt file
PROJECT_NAME_FILE = $(BUILD_DIR)/project_name.txt

# default "make" command which builds normally
all:
	@cmake -S . -B $(BUILD_DIR) 
	@cmake --build $(BUILD_DIR)

# builds with debug symbols
debug:
	@cmake -S . -B $(BUILD_DIR) -DCMAKE_BUILD_TYPE=Debug
	@cmake --build $(BUILD_DIR)

# builds normally, but outputs more information in the build directory
info:
	@cmake -S . -B $(BUILD_DIR) -DWRITE_PROJECT_NAME=ON
	@cmake --build $(BUILD_DIR)

# builds normally and runs unit tests
test: all
	@$(TEST_BIN_PATH)

# deletes the build directory
clean:
	@rm -rf $(BUILD_DIR)

# makes the debian subdirectories
deb_dir:
	@mkdir -p $(DEB_BIN_DIR)
	@mkdir -p $(DEB_CTRL_DIR)

# copies the control file under DEB_DIR and puts it under DEB_CTRL_DIR
deb_ctrl:
	@cp $(WORK_DIR)/$(DEB_DIR)/control $(WORK_DIR)/$(DEB_CTRL_DIR)/control

# copies the project executable to the debian install directory
deb_bin:
	@cp $(BUILD_DIR)/src/$(shell cat $(PROJECT_NAME_FILE)) $(DEB_BIN_DIR)

# build a debian package that contains the src executable
deb: info deb_dir deb_ctrl deb_bin
	@echo "Building debian package"$(DEB_NAME)" for project "$(shell cat $(PROJECT_NAME_FILE))
	@dpkg-deb --build $(shell echo $(DEB_DIR)/$(DEB_NAME) | tr -d ' ')

# clear out the debian directory of everything except the control file
deb_clean:
	@rm -rf $(shell echo $(DEB_DIR)/$(DEB_NAME) | tr -d ' ')
	@rm -rf $(shell echo $(DEB_DIR)/$(DEB_NAME).deb | tr -d ' ')