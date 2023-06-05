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
			s++;
		else if (*s == '-')
		{
			sign = sign * -1;
			s++;
		}
		else if (*s == '+')
			s++;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (result >= (INT_MAX / 10))
			{
				result = INT_MAX;
				s++;
			}
			else
			{
				result = (result * 10) + digit;
				s++;
			}
		}
		else if (result != 0)
			break;
		else
			s++;
	}
	if (result == INT_MAX && sign == -1)
		return (INT_MIN);
	else
		return (result * sign);
}
