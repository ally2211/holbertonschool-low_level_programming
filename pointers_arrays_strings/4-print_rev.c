#include "main.h"

/**
 * print_rev - function that prints reverse of a string, followed by a new line
 * @str: pointer passed
 *
 * Return: void
 */
void print_rev(char *str)
{
	while (*str != '\0')
	{
		str++;
	}
	str--;
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
