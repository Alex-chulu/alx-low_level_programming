#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list argx;
	unsigned int x;
	char *alex, *separator;

	va_start(argx, format);

	separator = "";

	i = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argx, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argx, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argx, double));
				break;
			case 's':
				alex = va_arg(argx, char *);
				if (alex == NULL)
					alex = "(nil)";
				printf("%s%s", separator, alex);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}
	printf("\n");
	va_end(argx);
}
