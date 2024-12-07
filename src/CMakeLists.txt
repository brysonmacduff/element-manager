include_directories("${CMAKE_SOURCE_DIR}/inc")

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/inc/*.h" "*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} spdlog::spdlog)
