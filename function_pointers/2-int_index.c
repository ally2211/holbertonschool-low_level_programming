#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function given as a parameter on each element of an array
 * @array: array to populate
 * @size:  size of the array
 * @cmp: pointer to the function you need to use
 *
 * Return: index of the first element for which the cmp function not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, loc;

	if (cmp != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			loc = cmp(array[i]);
			if (loc > 0)
			{
				return (i);
			}

		}
	}
	return (-1);
}
