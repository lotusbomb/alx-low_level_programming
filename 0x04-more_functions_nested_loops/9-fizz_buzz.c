#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints the numbers 1 to 100
 * fizz for multiples of 3, Buzz for multiples of 1
 * and fizzBuzz for multiples of both
 *
 * Return: always 0
 */

int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if(i % 3 == 0)
			printf("Fuzz");
		else
			printf("%i", i);
	if (i < 100)
		printf(" ");
}
printf("\n");
return (0);
}
