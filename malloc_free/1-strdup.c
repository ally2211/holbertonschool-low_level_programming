#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string passed
 * @str: string to copy
 *
 * Return: a pointer to the array or NULL if insufficient memory available
 **/
char *_strdup(char *str)
{
	size_t length, i;
	char *newpointer;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	newpointer = (char *)malloc((length + 1) * sizeof(char));

	if (newpointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newpointer[i] = str[i];
	}

	newpointer[i] = '\0';
	return (newpointer);
}
