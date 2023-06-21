#include <stdio.h>
/**
 * program for task 11
 * to print all natural numbers
 */
void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
else
{
printf("\n");
}
n++;
}
}
int main(void)
{
int start_number = 50;
print_to_98(start_number);
return 0;
}
