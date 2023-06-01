#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n:  number of \ to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
		while (i < n)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
