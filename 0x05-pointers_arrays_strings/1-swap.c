#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int exa = *a;

	*a = *b;
	*b = exa;
}
