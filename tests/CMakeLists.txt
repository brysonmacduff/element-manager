file(GLOB TEST_FILES CONFIGURE_DEPENDS "*.cpp")
add_executable(tests ${TEST_FILES})
target_include_directories(src INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(tests src)