#include "main.h"

/**
 * strcat - this function appends src string to dest string
 * @dest: destination
 * @src: source
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

