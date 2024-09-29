include_directories("${CMAKE_SOURCE_DIR}/inc")

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/inc/*.h" "*.cpp")

add_executable(element_manager ${SRC_FILES})
target_link_libraries(element_manager PRIVATE spdlog::spdlog)
