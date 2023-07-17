#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * flip_bits - Returns the number of bits to be flipped
 * to get from one number to another.
 * @n: First unsigned long int number.
 * @m: Second unsigned long int number.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		if ((xor_result & 1) != 0)
			count++;
		xor_result >>= 1;
	}

	return (count);
}
