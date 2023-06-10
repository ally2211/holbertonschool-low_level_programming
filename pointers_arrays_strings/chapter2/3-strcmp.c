#include <stdio.h>

/**
 * _strcmp - compare strings
 * @s1:  first string
 * @s2: second string
 *
 * Return: if they are the same then return 0 otherwise subtract ASC values
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	result = s1[0] - s2[0];

	for (i = 0; (result == 0 && s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		result = s1[i] - s2[i];
	}
	return (result);
}
