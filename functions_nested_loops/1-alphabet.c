#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
