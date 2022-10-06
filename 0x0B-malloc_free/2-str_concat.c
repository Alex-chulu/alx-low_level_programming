#include "main.h"

/**
 * _strlen - size of an array
 * @s: elements
 * Return: 0
 */

int _strlen(char *s)
{
	unsigned int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * str_concat - a function that concatenates two strings
 *@s1: first array
 *@s2: second array
 *Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *alx;
	unsigned int x, y, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (_strlen(s1) + _strlen(s2) + 1);

	alx = (char *) malloc(size * sizeof(char));

	if (alx == 0)
	{
		return (NULL);
	}

	for (x = 0; *(s1 + x) != '\0'; x++)
	{
		*(alx + x) = *(s1 + x);
	}

	for (y = 0; *(s2 + y) != '\0'; y++)
	{
		*(alx + x) = *(s2 + y);
		x++;
	}
	return (alx);
}
