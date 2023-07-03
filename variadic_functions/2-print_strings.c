#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - a function that prints numbers followed by a new line
 * @separator: string to be printed to separate
 * @n: strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap,char *);
		
		if (i == 0)
			printf("%s", str);
		else if (str == NULL)
                        printf("%s(nil)", separator);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}

