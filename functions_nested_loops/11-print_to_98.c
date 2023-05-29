#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints forwards and backwards to 98
 * @n: starts counting from first argument
 *
 * Return: 0 (SUCCESS)
 */
void print_to_98(int n)
{
	int cnt;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (cnt = n; cnt >= 98; cnt--)
		{
			if (cnt == n)
			{
				printf("%d", cnt);
			}
			else
			{
				printf(", %d", cnt);
			}
		}
		printf("\n");
	}
	else
	{
		for (cnt = n; cnt <= 98; cnt++)
		{
			if (cnt == n)
			{
				printf("%d", cnt);
			}
			else
			{
				printf(", %d", cnt);
			}
		}
		printf("\n");
	}
}
