#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of argument
 * Return: parameter sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list alex;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(alex, n);

	for (x = 0; x < n; x++)
		sum += va_arg(alex, int);

	va_end(alex);
	return (sum);
}
