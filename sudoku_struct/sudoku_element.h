//
// Created by Arkady on 07.11.2018.
//

#ifndef SUDOKU_SUDOKU_ELEMENTS_H
#define SUDOKU_SUDOKU_ELEMENTS_H
#include <stdbool.h>
typedef enum SudokuElement
{
    ONE     = 0b0000000000000001,
    TWO     = 0b0000000000000010,
    THREE   = 0b0000000000000100,
    FOUR    = 0b0000000000001000,
    FIVE    = 0b0000000000010000,
    SIX     = 0b0000000000100000,
    SEVEN   = 0b0000000001000000,
    EIGHT   = 0b0000000010000000,
    NINE    = 0b0000000100000000
} SudokuElement;

bool cell_has_element(short cell, SudokuElement element);

void delete_element_from_cell(short *cell, SudokuElement element);

void add_element_to_cell(short *cell, SudokuElement element);

#endif //SUDOKU_SUDOKU_ELEMENTS_H
