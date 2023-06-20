#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: sting pointed to fill up with constant
 * @b: character is the constant to fill up memory with
 * @n:  the number of bytes to fill
 *
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


