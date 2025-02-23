#ifndef SUDOKU_H
#define SUDOKU_H
#include <vector>
#include <iostream>

class SudokuBoard {
public:
    SudokuBoard();
    void print() const;
    //blank for now
private:
    std::vector<std::vector<int>> board;
};

#endif
