#include "main.h"

/**
 * print_alphabet - use function in header
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	counter = 1;

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
