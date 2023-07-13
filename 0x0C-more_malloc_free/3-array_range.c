#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * array_range - a function that creates an array of integers
  * @min: minimum
  * @max: maximum
  * Return: pointer
  */
int *array_range(int min, int max)
{
int *p;
int range, i;
if (min > max)
return (NULL);
range = max - min + 1;
p = malloc(range *sizeof(*p));
if (p == NULL)
return (NULL);
for (i = 0; i < range; min++, i++)
p[i] = min;
return (p);
}
