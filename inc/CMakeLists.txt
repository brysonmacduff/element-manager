file(GLOB INC_FILES CONFIGURE_DEPENDS "*.h")
add_library(inc INTERFACE ${INC_FILES}) # needs to be an INTERFACE library because it only contains headers
target_include_directories(inc INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})