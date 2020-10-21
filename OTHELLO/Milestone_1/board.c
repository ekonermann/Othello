#include "board.h"

#include <math.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

board_t* board_allocate() {
  return (board_t*) malloc(sizeof(board_t));
}

void board_new(board_t* board) {
   board->x = 0;
   board->y = 0;
}

void board_init(board_t* board, double x, double y) {
   board->x = x;
   board->y = y;
}

void board_add(board_t* board, board_t* another) {
   board->x += another->x;
   board->y += another->y;
}

double board_distance(board_t* board, board_t* another) {
   double x0 = board->x, y0 = board->y;
   double x1 = another->x, y1 = another->y;
   return sqrt( pow(x1 - x0, 2) + pow(y1 - y0, 2));
}

double board_x(board_t* board) {
   return board->x;
}
   
double board_y(board_t* board) {
   return board->y;
}

extern void board_print(board_t* board, FILE* stream) {
   fprintf(stream, "board(%lf, %lf)", board->x, board->y);
}

