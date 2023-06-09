#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int num, printed;
	char *str;
	float fnum;
	const char *ptr = format;

	va_start(ap, format);
	while (format != NULL && *ptr != '\0')
	{
		printed = 1;
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				num = va_arg(ap, int);
				printf("%d", num);
				break;
			case 'f':
				fnum = va_arg(ap, double);
				printf("%f", fnum);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				printed = 0;
		}
		if ((printed == 1) && *(ptr + 1))
			printf(", ");

		ptr++;
		printed = 0;
	}
	printf("\n");
	va_end(ap);
}
