#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - sums of all arguments
  * @n: number of arguments
  * @...: variable list
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, result;
va_list ap;
if (n == 0)
return (0);
va_start(ap, n);
for (i = result = 0; i < n; i++)
{
result += va_arg(ap, int);
}
va_end(ap);
return (result);
}
