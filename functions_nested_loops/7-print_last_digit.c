#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: number passed to function
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		n = -n;
	}

	lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
