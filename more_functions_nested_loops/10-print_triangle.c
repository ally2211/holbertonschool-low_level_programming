#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @n:  number of # to print
 *
 * Return: void
 */
void print_triangle(int n)
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
			for (j = i; j <= n; j--)
			{
				_putchar(' ');
			}
			for (j = i; j >= n; j--)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
