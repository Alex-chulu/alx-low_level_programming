#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: string accepted
 * Return: Returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, z = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				z++;
			}
			y++;
		}
		x++;
	}
	return (z);
}
