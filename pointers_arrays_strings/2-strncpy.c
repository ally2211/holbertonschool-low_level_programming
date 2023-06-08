#include <stdio.h>

/**
 * _strncpy - Copies a string.  If no null in src then none copied. 
 * if the length of src is less than n, then a null is place in dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	char *p;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}

	if (i < n)
	{
		dest[i] = '\0';
	}

	p = dest;	
	return (p);
}

