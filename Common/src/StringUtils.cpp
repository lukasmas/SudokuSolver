#include "StringUtils.hpp"

#include <algorithm>

namespace string_utils
{

    std::vector<std::string> split(const std::string &str, const std::string &delimiter)
    {
        std::vector<std::string> splitStr{};
        auto beginPos{0};
        auto endPos{0};
        bool endReached{false};

        while (!endReached)
        {
            endPos = str.find(delimiter, beginPos);
            if (endPos == std::string::npos)
            {
                splitStr.push_back(str.substr(beginPos, endPos));
                endReached = true;
            }
            else
            {
                splitStr.push_back(str.substr(beginPos, endPos - beginPos));
                beginPos = endPos + 1;
            }
        }
        return splitStr;
    }

    bool isNumber(const std::string &s)
    {
        return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
    }
}
