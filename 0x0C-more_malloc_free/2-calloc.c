#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: bytes in an array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alex;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alex = malloc(nmemb * size);
	if (alex == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		alex[x] = 0;

	return (alex);
}
