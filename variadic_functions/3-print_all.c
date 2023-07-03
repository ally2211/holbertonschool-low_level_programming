#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_argument - a function that prints anything
 * @type: what format type passed to the function
 * @ap: the value passed
 *
 * Return: void
 */
void print_argument(char type, va_list ap)
{
	char *str;

	switch (type)
	{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			{
				*str = va_arg(ap, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			break;
	}
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *ptr = format;

	va_start(ap, format);
	while (format != NULL && *ptr != '\0')
	{
		print_argument(*ptr, ap);
		if (*(ptr + 1) != '\0')
			printf(", ");

		ptr++;
	}

	printf("\n");
	
	va_end(ap);
}
