#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size:  number of # to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= (size - row); space++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

