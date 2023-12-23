#include "SudokuParser.hpp"
#include "StringUtils.hpp"
#include <fstream>
#include <iostream>

namespace parsers
{
    SudokuParser::SudokuParser() {}

    std::int32_t SudokuParser::parseSudoku(const std::string &path)
    {

        std::ifstream sudokuFile(path);
        if (!sudokuFile.is_open())
        {
            return -1;
        }
        std::string line{};
        RawSudoku rawSudoku{};
        while (std::getline(sudokuFile, line))
        {
            RawSudokuRow row{};

            auto split = string_utils::split(line, ",");
            for (const auto &s : split)
            {
                auto num = (s.empty() ? 0 : atoi(s.c_str()));
                row.push_back((num));
            }
            rawSudoku.push_back(row);
        }
        rawSudokuMap[lastId++] = rawSudoku;
        sudokuFile.close();
        return lastId - 1;
    }

    RawSudoku SudokuParser::getSudoku(std::int32_t id)
    {
        if (rawSudokuMap.find(id) != rawSudokuMap.end())
        {
            return rawSudokuMap.at(id);
        }
        return {};
    }
}