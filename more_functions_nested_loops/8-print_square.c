#include "main.h"

/**
 * print_square - draws a square in the terminal
 * @n:  number of # to print
 *
 * Return: void
 */
void print_square(int n)
{
	int i = 1;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
