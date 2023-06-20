#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string pointed by src to the buffer pointed by dest
 * @dest: pointer to copy string to
 * @src: pointer that points to a string
 *
 * Return: char is the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = ('\0');

	return (ptr);
}
