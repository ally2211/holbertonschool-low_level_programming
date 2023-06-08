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
	int i;
	char *p;
	int srclength;

	while (*src != '\0') 
	{
		src++;
		srclength++;
	}

	if (n < srclength) // then add null
	{
		while (*dest != '\0')
		{
			for (
			*dest = *src;
			dest++;
			src++;
			length++;
		}

	while (*dest != '\0')
	{
		dest++;
		length++;
	}

	*dest = '\0';
	dest--;
	p = dest;

	for (i = length; i > 0; i--, dest--)
	{
		p = dest;
	}

	return (p);
}

