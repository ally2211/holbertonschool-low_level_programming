#include <stdio.h>
#include <string.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: This is the string to be scanned
 * @c: This is the character to be searched in str.A pointer to the memory loc
 *
 * Return: It returns a pointer to the first occurrence of the character c
 * or Null if not found.
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
