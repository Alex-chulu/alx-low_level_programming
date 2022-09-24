#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int x = 0, y = 0, z = 5;
	char m[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (str[x])
	{
		y = 0;

		while (y < z)
		{
			if (str[x] == m[y] || str[x] - 32 == m[y])
			{
				str[x] = n[y];
			}
			y++;
		}
		x++;
	}
	return (str);
}
