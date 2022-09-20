#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int chulu;

	for (chulu = 0; chulu < n; chulu++)
	{
		if (chulu != n - 1)
		{
			printf("%d, ", a[chulu]);
		}
		else
		{
			printf("%d", a[chulu]);
		}
	}
	putchar(10);
}
