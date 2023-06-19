#include "main.h"

/**
 * _strlen_recursion - calculate length of a string
 * @s: string passed to print
 *
 * Return: int number of characters in string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
