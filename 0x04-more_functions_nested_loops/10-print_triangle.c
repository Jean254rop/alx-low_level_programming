#include "main.h"
/**
 * print_triangle - prints a triangle
 * @s: our variable
 * return 0
 */
void print_triangle(int s)
{
int row, hashes, spaces;
if (s <= 0)
{
	_putchar('\n');
}
else
{
for (row = 1; row <= s; row++)
{
for (spaces = s - row; spaces >= 1; spaces--)
{
_putchar(' ');
}
for (hashes = 1; hashes <= row; hashes++)
{
	_putchar('#');
}
_putchar('\n');
}
}
}
