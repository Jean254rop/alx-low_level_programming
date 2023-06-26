#include "main.h"
/**
 * _strlen - return the length of string
 * @s: to be checked
 * return 0
 */
int _strlen(char *s)
{
	int string_length = 0;
while (s[string_length])
	string_length++;
return (string_length);
}
