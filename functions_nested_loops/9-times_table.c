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
	size_t result_size;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result_size = sizeof(i * j);
			if (i == 9 && j == 9)
			{
				printf("%d", i * j);
			}
			else
			{
				if (result_size > 2)
				{
					printf("%d, ", i * j);
					printf("%zu ", result_size);
				}
				else
				{
					printf("%d,  ", i * j);
					printf("%zu  ", result_size);
				}
			}
		}
		printf("\n");
	}
}
