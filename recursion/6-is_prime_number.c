#include <stdio.h>

/**
 * is_divisible - Checks if a number is divisible by a divisor.
 * @n: The number to check.
 * @i: The number to divide by to check.
 *
 * Return: 0 if the number is divisible, 1 if not.
 */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_divisible(n, 2));
}
