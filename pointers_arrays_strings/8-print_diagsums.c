#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - a function that prints a chessboard
 * @a: This is a pointer to a matrix of size
 * @size:  square matrix of size
 *
 * Return: void
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sumDiagA = 0;
	int sumDiagB = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumDiagA += a[i * size + i];
				sumDiagB += a[i * size + (size - 1 - i)];
			}
		}
	}
	printf("%d, %d\n", sumDiagA, sumDiagB);
}
