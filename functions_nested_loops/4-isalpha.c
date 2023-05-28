#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @ch: alpha character passed to function
 *
 * Return: Either 1 or 0. 1 means it's not lowercase. 0 it is.
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z'))
	{
		return (1);
	}
	return (0);
}
