#include "main.h"

int squareRootHelper(int n, int start, int end);

/**
 * _sqrt_recursion - calculate square root using recursion
 * @n: base
 *
 * Return: square root of n or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (squareRootHelper(n, 1, n / 2));
	}
}

/**
 * squareRootHelper - using start and n/2 as end iterate to find sqrroot
 * base case: mid is also sqroot
 * @n: base
 * @start: is 1
 * @end: is n/2
 *
 * Return:  sqrroot
 */
int squareRootHelper(int n, long start, long end)
{
	if (start <= end)
	{
		long mid = (start + end) / 2;
		long square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (squareRootHelper(n, mid + 1, end));
		}
		else
		{
			return (squareRootHelper(n, start, mid - 1));
		}
	}
	else
	{
		return (-1);
	}
}
