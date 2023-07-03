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
	int num;
	char *str;
	float fnum;
	const char *ptr = format;
	int printed;

	va_start(ap, format);

	while (format != NULL && *ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				printed = 1;
				break;
			case 'i':
				num = va_arg(ap, int);
				printf("%d", num);
				printed = 1;
				break;
			case 'f':
				fnum = va_arg(ap, double);
				printf("%f", fnum);
				printed = 1;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					printed = 1;
				}
				printf("%s", str);
				printed = 1;
				break;
		}

		if ((printed == 1) && *(ptr + 1))
			printf(", ");

		ptr++;
		printed = 0;
	}

	printf("\n");
	va_end(ap);
}

