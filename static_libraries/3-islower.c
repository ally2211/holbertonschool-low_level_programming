#include "main.h"

/**
 * _islower - checks lowercase character
 * @ch: alpha character passed to function
 *
 * Return: Either 1 or 0. 1 means it's not lowercase. 0 it is.
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);
}
