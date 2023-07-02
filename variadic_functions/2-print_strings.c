#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers followed by a new line
 * @separator: string to be printed to separate
 * @n: strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%s", va_arg(ap, char *));
		else
			printf("%s%s", separator, va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}

