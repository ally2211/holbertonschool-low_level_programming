#include "main.h"

/**
 * _strncat - this function appends n # of src chars to dest string
 * @dest: destination
 * @src: source
 * @n: number of chars to append
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int length = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && length < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		length++;
	}

	*ptr = '\0';

	return (dest);
}

