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

bool SudokuBoard::isValid(int row, int col, int num) const {
    //row and column check
    for (int i = 0; i < 9; ++i) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }
    //checking 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[startRow + i][startCol + j] == num)
                return false;
        }
    }
    return true;
}