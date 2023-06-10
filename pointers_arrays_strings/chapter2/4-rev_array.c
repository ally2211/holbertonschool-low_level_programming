#include <stdio.h>

/**
 * reverse_array - print an array of integers in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;
	int i;

	end = n - 1;
	start = 0;
	i = 0;

	for (; (start < end && i < n); start++, end--, i++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
