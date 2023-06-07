#include "main.h"

/**
 * _strncpy - this function copies n number of characters to dest from src
 * @dest: destination
 * @src: source
 * @n: number of chars to append
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	while (*src != '\0' && length < n)
	{
		*dest = *src;
		dest++;
		src++;
		length++;
	}

	*dest = '\0';

	return (dest);
}

