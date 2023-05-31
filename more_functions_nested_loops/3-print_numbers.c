#include "main.h"

/**
 * print_numbers - is a function that prints numbers
 *
 * Return: 0 is success
 */
void print_numbers(void)
{
	int i;

	for (i=0; i<=9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
