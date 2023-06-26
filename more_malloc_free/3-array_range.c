#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: an array starting min
 * @max: an array ending in max
 *
 * Return: a pointer to new array
 * **/
int *array_range(int min, int max)
{
	int *newpointer;
	int i, index = 0;

	if (min > max)
		return (NULL);

	newpointer = malloc((max - min + 1) * sizeof(int));

	if (newpointer == NULL)
		return (NULL);

	for (i = min; i <= max; i++, index++)
	{
		newpointer[index] = i;
	}

	return (newpointer);
}
