#include "main.h"
/**
 * A program for task 4 - checks for aplhabetic character
 * @c: checkee
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
