#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - function that executes a function given as a parameter
  * @array: input
  * @size: array
  * @action: pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = -1;
if (array && action)
{
while (++i < size)
action(array[i]);
}
}
