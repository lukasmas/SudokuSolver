#pragma once
#include <vector>
#include <string>
namespace string_utils
{
    std::vector<std::string> split(const std::string &str, const std::string &delimiter);
    bool isNumber(const std::string &s);
}