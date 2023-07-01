#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: The number of arguments (including the program name).
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on wrong number of arguments,
 *         99 on unknown operator, or 100 on division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}

