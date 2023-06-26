#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: number of bytes from s2 to concatenate
 *
 * Return: a string pointer with concat strings.  If null passed treat as empty
 * **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newpointer;
	size_t  length1 = strlen(s1);
	size_t i, j;

	newpointer = malloc((length1 + 1 + n) * sizeof(char));

	for (i = 0; i < length1; i++)
	{
		newpointer[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		newpointer[i] = s2[j];
	}

	newpointer[i] = '\0';

	if (newpointer == NULL)
	{
		exit(98);
	}
	return (newpointer);
}
