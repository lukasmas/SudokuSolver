
#pragma once

#include <vector>
#include <string>

namespace input_parser
{
    class InputParser
    {
    public:
        InputParser(int argc, char *argv[]);
        bool parseInput();

    private:
        bool validateInputData();
        bool parseArgs();

        std::vector<std::string> inputArgs{};
        std::vector<std::string> paths{};
    };

}
