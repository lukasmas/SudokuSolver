#include "InputParser.hpp"
#include "UserCommunicator.hpp"
#include <iostream>
#include <algorithm>

namespace options
{
    constexpr auto help{"--help"};
    constexpr auto helpShort{"-h"};
    constexpr auto textFile{"--text"};
    constexpr auto textFileShort{"-t"};

    const std::vector<std::string> availableOptions{help, helpShort, textFile, textFileShort};
}

namespace input_parser
{
    InputParser::InputParser(int argc, char *argv[])
    {
        for (int i{1}; i < argc; i++)
        {
            inputArgs.push_back(std::string(argv[i]));
        }
    }
    bool InputParser::validateInputData()
    {
        if (inputArgs.empty())
        {
            return false;
        }
        return true;
    }

    bool InputParser::parseArgs()
    {
        for (const auto &option : options::availableOptions)
        {
            auto result = std::find(inputArgs.begin(), inputArgs.end(), option);
            if (result != inputArgs.end())
            {
                if (option == options::help || option == options::helpShort)
                {
                    user_communicator::printHelp();
                    return true;
                }
                if (option == options::textFile || option == options::textFileShort)
                {
                    if (auto path = std::next(result); path != inputArgs.end())
                    {
                        paths.push_back(*path);
                        std::cout << paths.back() << std::endl;
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool InputParser::parseInput()
    {
        if (!validateInputData())
        {
            user_communicator::printUsage();
            return false;
        }
        if (!parseArgs())
        {
            user_communicator::printUsage();
            return false;
        }

        return true;
    }

}