#include "main.h"

/**
 * factorial - calculate factorial using recursion
 * @n: int to take the factorial of
 *
 * Return: int factorial
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (n * factorial(n + 1));
	else
		return (1);
}
