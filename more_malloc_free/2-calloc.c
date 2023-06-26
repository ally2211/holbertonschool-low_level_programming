#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: an array of nmemb elements
 * @size: size of bytes each
 *
 * Return: a pointer to allocated memory
 * **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *newpointer;
	unsigned int i;

	if (nmemb == 0 || size ==0)
		return NULL;

	newpointer = malloc((nmemb + 1) * size);

	if (newpointer == NULL)
		return NULL;

	for(i = 0; i < nmemb; i ++)
	{
		if (size == sizeof(char))
		{
			*((char *)newpointer + i) = '\0';
		}
		if (size == sizeof(int))
		{
			*((int *)newpointer + i) = 0;
		}
	}

	return (newpointer);
}
