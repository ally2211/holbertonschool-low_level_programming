#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: A pointer to the memory loc where the copied data will be stored.
 * @src: A pointer to the memory location from where the data is to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: It returns a pointer to the memory location where data is copied.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
