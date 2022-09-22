#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination for storing the coppy
 * @src: string source
 * @n: number of size coppied
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest)
}
