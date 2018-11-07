//
// Created by Arkady on 07.11.2018.
//

#ifndef SUDOKU_SUDOKU_H
#define SUDOKU_SUDOKU_H

#include "sudoku_element.h"

const short TABLE_SIZE = 9;

typedef struct Sudoku
{
    short table[TABLE_SIZE][TABLE_SIZE];

    short *rows[TABLE_SIZE];
    short *columns[TABLE_SIZE];

    short *main_diag[TABLE_SIZE];
    short *secondary_diag[TABLE_SIZE];

} Sudoku;

Sudoku sudoku_init();

void sudoku_set(Sudoku *sudoku, short i, short j, SudokuElement element);


#endif //SUDOKU_SUDOKU_H
