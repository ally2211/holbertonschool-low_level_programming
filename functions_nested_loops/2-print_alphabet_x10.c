#include "main.h"

/**
 * print_alphabet - use function in header
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}
