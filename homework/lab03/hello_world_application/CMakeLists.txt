cmake_minimum_required(VERSION 3.4)
project(hello_world)

add_executable(hello_world hello_world.cpp)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib ${CMAKE_CURRENT_BINARY_DIR}/formatter_ex_lib)

target_include_directories(hello_world PUBLIC
${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(hello_world formatter_ex_lib)