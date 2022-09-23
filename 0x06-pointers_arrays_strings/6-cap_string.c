#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int x = 0, y;
	int alx = 13;
	char space[] = {32, '\t', '\n', 44, ';',
	46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[x])
	{
		y = 0;

		while (y <= space)
		{
			if ((x == 0 || str[x - 1] == space[y] &&
			str[x] >= 97 && str[x] <= 122))
			{
				str[x] -= 32;
			}
			y++;
		}
		x++;
	}
	return (str);
}
