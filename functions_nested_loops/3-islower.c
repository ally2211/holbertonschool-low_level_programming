#include "main.h"

/**
 * _islower - checks lowercase character
 *
 * Return: Either 1 or 0.
 */
/**
 * ch - is a character passed to function a-z
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);
}
