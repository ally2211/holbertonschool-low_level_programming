#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	putchar('0');
	for (digit = 1; digit <= 9; digit++)
	{
		putchar(',');
		putchar(' ');
		putchar(digit + '0');
	}

	return (0);
}
