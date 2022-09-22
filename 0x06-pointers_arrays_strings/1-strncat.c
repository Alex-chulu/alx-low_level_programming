#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @src: string
 * @dest: string
 * @n: integer
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
	{
		dest_length++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_length++] = src[index];
	}

	return (dest);
}
