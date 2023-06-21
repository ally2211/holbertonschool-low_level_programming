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
	if (argc >- 1)
	{
		printf("%s\n", argv[0]);	
	}
	return (0);
}
