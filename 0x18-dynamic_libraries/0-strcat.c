#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
	{
		dest_length++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_length++] = src[index];
	}

	return (dest);
}
