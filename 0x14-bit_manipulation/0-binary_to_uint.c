#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int cov = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		cov = 2 * cov + (b[x] - '0');
	}
	return (cov);
}
