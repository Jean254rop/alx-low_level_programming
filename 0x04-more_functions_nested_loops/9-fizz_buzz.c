#include  <stdio.h>
#include "main.h"
/**
 * fizz_buzz - for fiz buzz, print numbers 1-100 with a new line
 *
 *return 0
 */
int main(void)
{
	int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 15 == 0)
				printf("fizzbuzz");
			else if (i % 3 == 0)
				printf("fizz");
			else
				printf("%i", i);
			if (i < 100)
				printf(" ");
}
printf("\n");
return (0);
}
