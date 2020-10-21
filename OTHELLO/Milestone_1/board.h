/*
 * This example is often seen in OOP books. 
 * It is to represent a 2D board. We start with double x, y.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include <stdio.h>

typedef struct _board_t {
    double x, y;
} board_t;

extern board_t* board_allocate();

extern void board_new(board_t* board);

extern void board_init(board_t* board, double x, double y);

extern void board_add(board_t* board, board_t* another);

extern double board_distance(board_t* board, board_t* another);

extern double board_x(board_t* board);

extern double board_y(board_t* board);

extern void board_print(board_t* board, FILE* stream);

#endif
