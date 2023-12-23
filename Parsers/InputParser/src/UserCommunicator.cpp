#include "UserCommunicator.hpp"
#include <iostream>

namespace user_communicator
{
    void printUsage()
    {
        std::cout << "Invalid arguments!\nExample of use:\n./SudokuSolver -t sudoku.txt\nFor more info type './SudokuSolver --help'" << std::endl;
    }

    void printHelp()
    {
        std::cout << "Available options:\n";
        std::cout << "-h, --help: prints help\n";
        std::cout << "-t, --text: sets input as a text files, example:\n";
        std::cout << "\t./SudokuSolver -t sudoku.txt" << std::endl;
    }

    void printError()
    {
        std::cout << std::endl;
    }

}