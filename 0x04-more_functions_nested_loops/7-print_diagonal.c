#include "main.h"
/**
 * print_diagonal - it draws a diagonal line
 * @n: the variable
 * return: 0
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
	_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
