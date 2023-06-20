#include "main.h"

/**
 * _isdigit - is a function that checks if it's a digit
 * @c: is argument of character to check
 *
 * Return:  1 if yes is a digit else return 0
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
