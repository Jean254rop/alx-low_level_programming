#include "main.h"
/**
 * _strcat - a function to concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
for
(j = 0; dest[j]
!= '\0';)
j++;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
