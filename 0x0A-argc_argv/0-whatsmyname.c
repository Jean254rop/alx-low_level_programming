#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name and a new line
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
argc--;
printf("%s\n", argv[0]);
return (0);
}
