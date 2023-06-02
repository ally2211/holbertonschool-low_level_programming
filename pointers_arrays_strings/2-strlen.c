#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: string passed to function
 *
 * return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
