#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number passed to function
 *
 * Return: Either 1 or 0. 1 when n is greater than 0. 0 is a negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0')
		return (-1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
