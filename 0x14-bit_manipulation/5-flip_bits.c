#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: number to flip into
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bt = 0;

	while (flip > 0)
	{
		bt += (flip & 1);
		flip >>= 1;
	}

	return (bt);
}
