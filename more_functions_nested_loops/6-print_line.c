#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:  number of - to print
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('-');
		i++;
	}
		_putchar('\n');
}
