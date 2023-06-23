#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and
 * initializes it witha a specific char
 * @size: size of array
 * @c: char to initialize
 *
 * Return: a pointer to the array or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		*array = NULL;
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
