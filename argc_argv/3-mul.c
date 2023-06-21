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
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mult = mult * atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
