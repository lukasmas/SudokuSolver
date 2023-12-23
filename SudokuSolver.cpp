#include <InputParser.hpp>
#include <SudokuParser.hpp>

#include <memory>
#include <iostream>

int main(int argc, char *argv[])
{
    auto inputParser = std::make_unique<parsers::InputParser>(argc, argv);
    if (!inputParser->parseInput())
    {
        return -1;
    }

    auto sudokuParser = std::make_unique<parsers::SudokuParser>();

    auto id = sudokuParser->parseSudoku(inputParser->getPath());

    if (id < 0)
    {
        return -1;
    }

    auto rawSudoku = sudokuParser->getSudoku(id);
    for (const auto &row : rawSudoku)
    {
        for (const auto num : row)
        {
            std::cout << num << " | ";
        }
        std::cout << std::endl;
    }

    return 0;
}