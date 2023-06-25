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
	int length = strlen(str);
	char *newpointer = (char *)malloc((length + 1) * sizeof(char));
	int i;

	if (newpointer == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newpointer[i] = str[i];
	}

	return (newpointer);
}