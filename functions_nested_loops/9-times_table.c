#include "main.h"
#include <stdio.h>

/**
 * times_table- prints every minute of the day
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 9 && j == 9)
			{
				printf("%2d", i * j);
			}
			else
			{
				printf(" %2d, ", i * j);
			}
		}
		printf("\n");
	}
}
