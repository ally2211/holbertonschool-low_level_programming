#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	putchar('0');
	for (digit = '1'; digit <= '9'; digit++)
	{
		putchar(',');
		putchar(' ');
		putchar(digit);
	}

	return (0);
}
