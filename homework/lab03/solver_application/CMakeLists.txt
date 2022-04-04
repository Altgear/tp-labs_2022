cmake_minimum_required(VERSION 3.4)
project(solver_app)

add_executable(solver_app equation.cpp)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib ${CMAKE_CURRENT_BINARY_DIR}/formatter_ex_lib)

target_include_directories(solver_app PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib)

add_library(solver_lib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib/solver.cpp)

target_link_libraries(solver_app formatter_ex_lib solver_lib)