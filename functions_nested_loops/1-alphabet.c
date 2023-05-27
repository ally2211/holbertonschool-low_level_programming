#include "main.h"

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet(void);
	return (0);
}
