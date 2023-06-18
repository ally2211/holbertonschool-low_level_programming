#include "main.h"

/**
 * _print_rev_recursion - use puts to print a string, followed by a new line
 * @s: string passed to print
 *
 * return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
	}
	if (*s != '\0')
		_putchar(*s);
}
