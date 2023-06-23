#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings followed by null
 * @s1: string 1 to copy
 * @s2: string 2 to copy
 *
 * Return: a pointer to newly allocated space with concatenated strings
 **/
char *str_concat(char *s1, char *s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	char *newpointer = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	int i = 0, j = 0;

	if (newpointer == NULL || ((s1 == NULL) && (s2 == NULL)))
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < length1; i++)
		{
			newpointer[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < length2; j++, i++)
		{
			newpointer[i] = s2[j];
		}
	}
	newpointer = '\0';
	return (newpointer);
}
