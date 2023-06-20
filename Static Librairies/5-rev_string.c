#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints reverse of a string
 * @s: string array passed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	char temp;
	int start;
	int end;

	if (s == NULL)
	return;

	length = 0;
	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
