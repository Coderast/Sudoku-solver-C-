//
// Created by Arkady on 07.11.2018.
//

#include "sudoku.h"
#include "sudoku_element.h"
#include <string.h>

Sudoku sudoku_init() {
    Sudoku result;

    for (short i = 0; i < SUDOKU_SIZE; i++) {
        for (short j = 0; j < SUDOKU_SIZE; j++) {
            result.table[i][j] = (short) SUD_EL_ALL;
        }

        result.main_diag[i]      = &result.table[i][i];
        result.secondary_diag[i] = &result.table[i][SUDOKU_SIZE - i - 1];
    }

    return result;
}

void sudoku_set(Sudoku *sudoku, short row, short col, SudokuElement element) {
    sudoku->table[row][col] = element;

    const bool IS_MAIN_DIAG    = row == col;
    const bool IS_SECOND_DIAG  = row == SUDOKU_SIZE - col - 1;

    for (int id = 0; id < SUDOKU_SIZE; id++) {
        if (id != row) {
            delete_element_from_cell(&sudoku->table[id][col], element);

            if (IS_MAIN_DIAG) {
                delete_element_from_cell(&sudoku->main_diag[id][id], element);
            }

            if (IS_SECOND_DIAG) {
                delete_element_from_cell(&sudoku->secondary_diag[id][id], element);
            }
        }

        if (id != col) {
            delete_element_from_cell(&sudoku->table[row][id], element);
        }
    }


}




