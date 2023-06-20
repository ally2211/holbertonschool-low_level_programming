#include <stdio.h>
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: This is the string to be scanned
 * @accept: the character to be searched in str.A pointer to the memory loc
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 **/
unsigned int _strspn(char *s, char *accept)
{
	/**
	 * while (*s != '\0' && strchr(accept, *s) != NULL)
	 * {
	 * count++;
	 * s++;
	 * }
	 **/

	unsigned int count = 0;
	int found = 0;
	int i;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
