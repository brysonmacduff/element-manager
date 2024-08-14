file(GLOB SRC_FILES CONFIGURE_DEPENDS "*.cpp")
add_library(src ${SRC_FILES})
target_include_directories(src INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/inc")
target_link_libraries(src inc)


