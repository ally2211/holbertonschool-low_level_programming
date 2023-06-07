#include "main.h"
#include <stdio.h>

/**
 * print_array - print arrayhalf the string
 * @array: pointer passed
 * @size: int of size of array
 *
 * Return: void
 */
void print_array(int *array, int size)
{
	int i;

	i = 0;
	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			printf("%d", array[i]);
		}
		else
		{
			printf(", %d", array[i]);
		}
	}
	putchar('\n');
}
