#include <stdio.h>
#include <string.h>

/**
 * _strpstr - a function that searches a string for any of a set of bytes.
 * @haystack: This is the string to be examined
 * @needle: This is the sub-string to be searched in haystack string.
 *
 * Return: returns a pointer points to the first character of the found needle
 * in haystack otherwise a null pointer
 **/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;


	while (*h != 0)
	{
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		else if (h > haystack)
		{
			haystack = h;
			n = needle;
		}
		else
		{
			haystack++;
			h++;
		}
	}
	return ('\0');
}
