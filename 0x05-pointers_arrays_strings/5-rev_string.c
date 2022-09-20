#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s:string
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b, c;
	char *x, chulu;

	x = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		x++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		chulu = s[a];
		s[a] = *x;
		*x = chulu;
		x++;
	}
}
