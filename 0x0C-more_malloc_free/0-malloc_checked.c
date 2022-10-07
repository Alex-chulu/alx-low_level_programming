#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *alex;

	alex = malloc(b);
	if (alex == NULL)
	{
		exit(98);
	}
	return (alex);
}
