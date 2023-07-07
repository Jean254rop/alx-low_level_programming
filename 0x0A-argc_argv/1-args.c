#include "main.h"
#include <stdio.h>
/**
 * main - a program to print out all of the arguments passed to it
 * @argc: nuber of arguments
 * @argv: array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argv[0] = 0;
return (0);
}
