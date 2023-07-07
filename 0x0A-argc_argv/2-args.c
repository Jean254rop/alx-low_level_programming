#include "main.h"
#include <stdio.h>
/**
 * main - a program to print out all of the arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
