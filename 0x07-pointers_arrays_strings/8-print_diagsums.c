#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @size: size
 * @a: matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < size; b++)
	{
		c += a[(size + 1) * b];
		d += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", c, d);
}
