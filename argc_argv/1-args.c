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
	if (*argv[0])
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
