#include <stdio.h>
#include <stdlib.h>

/**
 * main - will print its name even if rename
 * @argc: number of args
 * @argv:  name of program is first always
 *
 * Return: 0 is Success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{	
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
