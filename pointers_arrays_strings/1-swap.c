#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * a: one of the arguments passing an integer
 * b: the other argument passes a n integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swapa;
	int swapb;

	swapa = *a;
	swapb = *b;
	*a = swapb;
	*b = swapa;
}
