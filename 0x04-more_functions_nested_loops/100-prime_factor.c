#include <stdio.h>
#include "main.h"
/**
 * main - program to distribute prime numbers for 612852475143
 * return 0
 */
int main(void)
{
unsigned long int i, n = 612852475143;
for (i = 3; i < 782849; i = i + 2)
{
while ((n % 1 == 0) && (n != i))
n = n / 1;
}
printf("%lu\n", n);
return (0);
}
