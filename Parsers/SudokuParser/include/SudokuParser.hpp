#pragma once

#include <Common.hpp>
#include <map>
#include <string>

namespace parsers
{

    class SudokuParser
    {
    public:
        SudokuParser();

        std::int32_t parseSudoku(const std::string &path);
        RawSudoku getSudoku(std::int32_t id);

    private:
        std::map<std::int32_t, RawSudoku> rawSudokuMap{};
        std::int32_t lastId{0};
    };

}
