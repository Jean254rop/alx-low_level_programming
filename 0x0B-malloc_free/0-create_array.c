#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - a function that creates an array of characters
 * and initialize it with a specific bar
 * @size: size of array
 * @c: char to initialize array
 * Return: pointer to chars
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size > 0)
{
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
}
else
return (NULL);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
