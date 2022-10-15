#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alex;
	unsigned int x;
	char *str;

	va_start(alex, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(alex, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(alex);
}
