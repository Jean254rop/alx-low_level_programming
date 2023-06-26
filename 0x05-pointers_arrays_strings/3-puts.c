#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer string
 * return string and new line
 */
void _puts(char *str)
{
int a = 0;
while (str[a])
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
