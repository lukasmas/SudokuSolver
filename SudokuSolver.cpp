#include <InputParser.hpp>
#include <memory>
#include <iostream>

int main(int argc, char *argv[])
{
    auto inputParser = std::make_unique<input_parser::InputParser>(argc, argv);
    inputParser->parseInput();
    return 0;
}