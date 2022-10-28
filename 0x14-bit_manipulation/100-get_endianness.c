#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *x = (char *)&n;

	if (*x == 1)
		return (1);

	return (0);
}
