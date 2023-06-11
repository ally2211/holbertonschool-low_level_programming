#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: This is the string to be scanned
 * @accept: This is the character to be searched in str.
 *
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
