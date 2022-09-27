#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s:string
 * @c: character to be located
 * Return: Returns a pointer to the first occurrence
 * of the character c
 */

char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
