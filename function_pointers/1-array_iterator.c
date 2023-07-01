#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given  as a parameter on each element of an array
 * @array: array to populate
 * @size:  size of the array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
