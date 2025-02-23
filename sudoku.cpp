#include "sudoku.h"

SudokuBoard::SudokuBoard() : board(9, std::vector<int>(9, 0)) {}

void SudokuBoard::print() const {
    for (const auto &row : board) {
        for (int cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}