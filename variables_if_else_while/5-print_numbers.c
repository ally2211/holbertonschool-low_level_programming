#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits[] = "0123456789";
	size_t i;

	for (i = 0; i < 10; i++)
	{
		printf("%c", digits[i]);
	}

	printf("\n");

	return 0;
}

