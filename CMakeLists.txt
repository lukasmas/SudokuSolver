cmake_minimum_required(VERSION 3.2)

project(SudokuSolver)

add_subdirectory(Parsers)
add_subdirectory(Common)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD_REQUIRED)
add_compile_options(-Wall -Wextra -pedantic -Werror -Wreturn-type)

add_executable(SudokuSolver SudokuSolver.cpp)
target_link_libraries(SudokuSolver PRIVATE InputParserLib SudokuParserLib CommonLib)