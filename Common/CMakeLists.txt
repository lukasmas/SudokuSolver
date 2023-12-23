add_library(CommonLib
include/Common.hpp
include/StringUtils.hpp
src/StringUtils.cpp)

target_include_directories(CommonLib PUBLIC include)

