add_executable(main main.cpp)
target_include_directories(src INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(main src)