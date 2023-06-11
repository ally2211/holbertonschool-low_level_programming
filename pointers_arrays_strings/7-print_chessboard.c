#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - a function that prints a chessboard
 * @a: This is a pointer to a matrix of 8
 *
 * Return: void
 **/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
	printf("\n");
	}
}
