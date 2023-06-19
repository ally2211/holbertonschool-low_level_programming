#include "main.h"

/**
 * _pow_recursion - calculate power exponent using recursion
 * @x: base
 * @y: exponent
 *
 * Return: int _pow_recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
