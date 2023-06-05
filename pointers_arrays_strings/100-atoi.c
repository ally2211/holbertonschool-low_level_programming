#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string passed to atoi function
 *
 * Return: int the converted character
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == ' ')
		{
			s++;
		}
		else if (*s == '-')
		{
			sign = sign * -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			result = (result * 10) + digit;
			s++;
		}
		else if (result != 0)
		{
			break;
		}
		else
		{
			s++;
		}
	}
	return (result * sign);
}
