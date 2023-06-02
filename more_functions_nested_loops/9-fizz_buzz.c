#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	Fizz_Buzz();
	return (0);
}

/**
 * fizz_buzz - print numbers 1-100 followed by new line
 *
 * return: 0 for success
 */
void Fizz_Buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if  ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
