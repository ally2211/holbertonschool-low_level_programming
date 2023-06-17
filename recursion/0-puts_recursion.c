#include "main.h"

/**
 * _puts_recursion - use puts to print a string, followed by a new line
 * @s: string passed to print
 *
 * return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{	
			
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
