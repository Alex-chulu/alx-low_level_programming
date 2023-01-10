#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int xy = 0;
	int start = 1;
	int other = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			start *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			other = 1;
			xy = (xy * 10) + (s[a] - '0');
			a++;
		}

		if (other == 1)
		{
			break;
		}
		a++;
	}
	xy *= start;
	return (xy);
}
