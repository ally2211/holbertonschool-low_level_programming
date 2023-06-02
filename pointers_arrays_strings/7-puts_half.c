#include "main.h"

/**
 * puts_half - print half the string
 * @str: pointer passed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int start_index;

	length = 0;
	while (str[length] != '\0')
		length++;

	start_index = 0;
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = length / 2;
	}

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
