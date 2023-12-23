add_library(InputParserLib
  src/InputParser.cpp
  src/UserCommunicator.cpp
  include/InputParser.hpp
  include/UserCommunicator.hpp

)

target_include_directories(InputParserLib PUBLIC include)

target_link_libraries(InputParserLib
    PRIVATE
    CommonLib)