#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
print_alphabet()
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
	print_alphabet();
	return (0);
}
