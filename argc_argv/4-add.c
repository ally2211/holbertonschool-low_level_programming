#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - will print its name even if rename
 * @argc: number of args
 * @argv:  name of program is first always
 *
 * Return: 0 is Success
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;
	char *result = argv[i];

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i <= argc; i++)
	{
		/*result = argv[i];*/
		for (j = 0; result[j] != '\0'; j++)
		{
			if(!_isdigit(result[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
