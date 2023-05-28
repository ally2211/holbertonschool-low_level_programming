#include "main.h"

/**
 * _islower - checks lowercase character
 *
 * Return: Always 0.
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);	
}
