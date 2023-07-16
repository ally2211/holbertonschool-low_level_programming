#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * set_bit - function to set the value of a bit at a given index
 * @n: unsigned long int to set a bit to
 * @index:  index where to set bit at
 *
 * Return: 1 if it worked and -1
 * if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
