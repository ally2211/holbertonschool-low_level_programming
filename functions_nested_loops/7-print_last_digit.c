#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: number passed to function
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
