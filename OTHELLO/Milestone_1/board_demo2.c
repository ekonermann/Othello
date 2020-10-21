#include <stdio.h>
#include <stdlib.h>

#include "board.h"

int main(int argc, char*argv[]) {
   board_t* p1 = board_allocate();
   board_t* p2 = board_allocate();

   board_new(p1);
   board_init(p1, 3.0, 0);
   board_new(p2);
   board_init(p2, 0, 4.0);

   printf("p1 = ");
   board_print(p1, stdout);
   printf(" p2 = ");
   board_print(p2, stdout);
   printf(" distance = %lf\n", board_distance(p1, p2));
}
