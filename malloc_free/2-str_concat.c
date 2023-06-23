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
	int length1, length2, i = 0, j = 0;
	char *newpointer;

	if ((s1 == NULL) && (s2 == NULL))
	{
		length1 = 0;
		length2 = 0;
	}
	else if (s1 == NULL)
	{
		length1 = 0;
		length2 = strlen(s2);
	}
	else if (s2 == NULL)
	{
		length2 = 0;
		length1 = strlen(s1);
	}
	else
	{
		length1 = strlen(s1);
		length2 = strlen(s2);
	}

	newpointer = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (newpointer == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		newpointer[i] = s1[i];
	}
	for (j = 0; j < length2; j++, i++)
	{
		newpointer[i] = s2[j];
	}
	newpointer[i] = '\0';
	return (newpointer);
}
