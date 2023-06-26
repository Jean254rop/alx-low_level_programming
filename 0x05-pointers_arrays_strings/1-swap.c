#include "main.h"
/**
 * swap_int - a function that swipes two integers
 * @x: stores y
 * @y: stores x
 * return 0
 */
void swap_int(int *x, int *y)
{
int swap;
swap = *y;
*y = *x;
*x = swap;
}
