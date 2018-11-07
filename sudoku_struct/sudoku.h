//
// Created by Arkady on 07.11.2018.
//

#ifndef SUDOKU_SUDOKU_H
#define SUDOKU_SUDOKU_H

#include "sudoku_element.h"

const short SUDOKU_SIZE = 9;

typedef struct Sudoku
{
    short table[SUDOKU_SIZE][SUDOKU_SIZE];

    short *main_diag[SUDOKU_SIZE];
    short *secondary_diag[SUDOKU_SIZE];

} Sudoku;

Sudoku sudoku_init();

void sudoku_set(Sudoku *sudoku, short row, short col, SudokuElement element);


#endif //SUDOKU_SUDOKU_H
