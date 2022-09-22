#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int chu;
	int alx;

	for (alx = n - 1; alx > n / 2; alx--)
	{
		chu = a[n - 1 - alx];
		a[n - 1 - alx] = a[alx];
		a[alx] = chu;
	}
}
