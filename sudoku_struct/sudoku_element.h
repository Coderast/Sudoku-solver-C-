//
// Created by Arkady on 07.11.2018.
//

#ifndef SUDOKU_SUDOKU_ELEMENTS_H
#define SUDOKU_SUDOKU_ELEMENTS_H
#include <stdbool.h>
typedef enum SudokuElement
{
    SUD_EL_ONE     = 0b0000000000000001,
    SUD_EL_TWO     = 0b0000000000000010,
    SUD_EL_THREE   = 0b0000000000000100,
    SUD_EL_FOUR    = 0b0000000000001000,
    SUD_EL_FIVE    = 0b0000000000010000,
    SUD_EL_SIX     = 0b0000000000100000,
    SUD_EL_SEVEN   = 0b0000000001000000,
    SUD_EL_EIGHT   = 0b0000000010000000,
    SUD_EL_NINE    = 0b0000000100000000,
    SUD_EL_ALL     = 0b0000000111111111
} SudokuElement;

bool cell_has_element(short cell, SudokuElement element);

void delete_element_from_cell(short *cell, SudokuElement element);

void add_element_to_cell(short *cell, SudokuElement element);

#endif //SUDOKU_SUDOKU_ELEMENTS_H
