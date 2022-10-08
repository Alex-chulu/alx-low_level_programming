#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *alex, x = 0, y = min;

	if (min > max)
		return (0);
	alex = malloc((max - min + 1) * sizeof(int));

	if (!alex)
		return (0);
	while (x <= max - min)
		alex[x++] = y++;
	return (alex);
}
