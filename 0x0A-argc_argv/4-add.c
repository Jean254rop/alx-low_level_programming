#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds all positive numbers 
 * should be folloewd by a new line
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int result, i;
result = 0;
if (checker(argc, 1, 0, argv) == 1)
printf("Error\n");
return (1);
for (i = 1; i < argc; i++)
result += atoi(argv[i]);
printf("%d\n", result);
return (0);
}
