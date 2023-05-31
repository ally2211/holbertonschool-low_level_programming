#include "main.h"

/** 
 * _isupper - is a function that checks uppercase
 * @c: is argument of character to check
 *
 * Return:  0 if yes is upper case else return 1
 */
int _isupper(int c)
{	
	if (c < 97)
		return (0);
	else
		return (1);
}
