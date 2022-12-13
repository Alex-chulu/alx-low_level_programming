#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: Returns a pointer to the byte in s that
 * matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
