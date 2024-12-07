# set base project settings
cmake_minimum_required(VERSION 3.22)
project(element_manager LANGUAGES CXX)

# cmake options
option(WRITE_PROJECT_NAME "Specifies whether to write the project name to a file." OFF)

# variables
set (BUILD_DIR "build")
set (PROJECT_NAME_FILE "build/project_name.txt")

if(WRITE_PROJECT_NAME)
    file(WRITE "${CMAKE_SOURCE_DIR}/${BUILD}/${PROJECT_NAME_FILE}" ${PROJECT_NAME})
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include testing dependencies
include(CTest)
find_package(GTest REQUIRED)
find_package(spdlog REQUIRED)
include(GoogleTest)

# create subdirectories
add_subdirectory(src)
add_subdirectory(inc)
add_subdirectory(tests)