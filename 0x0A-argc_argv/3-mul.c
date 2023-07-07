#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * atoi - converts string to integer
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, else reurn 1
 */
int main(int argc, char *argv[])
{
int num1, num2;
num1 = num2 = 0;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
else
printf("Error\n");
return (1);
}
