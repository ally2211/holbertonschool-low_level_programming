#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional array of int
 * @grid: a 2 dim grid actually from created last exercise
 * @height: second dimension
 *
 * Return: a pointer of int array or NULL when w & h are <= 0
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
