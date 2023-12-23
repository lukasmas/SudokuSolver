
#pragma once

#include <vector>
#include <string>

namespace parsers
{
    class InputParser
    {
    public:
        InputParser(int argc, char *argv[]);
        bool parseInput();
        std::string getPath();

    private:
        bool validateInputData();
        bool parseArgs();

        std::vector<std::string> inputArgs{};
        std::vector<std::string> paths{};
    };

}
