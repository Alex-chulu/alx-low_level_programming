#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: point
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alex;
	unsigned int size1 = 0, size2 = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	{
		n = size2;
		alex = malloc((size1 + n + 1) * sizeof(char));
	}

	if (alex == NULL)
	{
		return (0);
	}
	for (x = 0; x < size1; x++)
	{
		alex[x] = s1[x];
	}
	for (; x < (size1 + n); x++)
	{
		alex[x] = s2[x - size1];
	}
	alex[x] = '\0';

	return (alex);
}
