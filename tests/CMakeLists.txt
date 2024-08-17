file(GLOB TEST_FILES CONFIGURE_DEPENDS "*.cpp")

if(BUILD_TESTING)
    add_executable(shape_tests ${TEST_FILES})
    target_include_directories(src INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/src")
    target_link_libraries(shape_tests src GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(shape_tests)
endif()