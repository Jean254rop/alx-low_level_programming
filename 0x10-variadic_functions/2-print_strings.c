#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - print a list of strings and a new line
  * @separator: characters used
  * @n: number of items
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *words;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
words = va_arg(ap, char *);
(words) ? printf("%s", words) : printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
