add_library(SudokuParserLib
  src/SudokuParser.cpp
  include/SudokuParser.hpp

)

target_include_directories(SudokuParserLib PUBLIC include)

target_link_libraries(SudokuParserLib
    PRIVATE
    CommonLib)