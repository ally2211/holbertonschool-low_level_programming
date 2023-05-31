#include "main.h"

/**
 * _isupper - is a function that checks uppercase
 * @c: is argument of character to check
 *
 * Return:  1 if yes is upper case else return 0
 */
int _isupper(int c)
{
	if (c < 97 && c > 64)
		return (1);
	else
		return (0);
}
