#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int comp = 0;

	while (1)
	{
		if (s1[x] == '\0' && s2[x] == '\0')
		{
			break;
		}
		else if (s1[x] == '\0')
		{
			comp = s2[x];
			break;
		}
		else if (s2[x] == '\0')
		{
			comp = s1[x];
			break;
		}
		else if (s1[x] != s2[x])
		{
			comp = s1[x] - s2[x];
			break;
		}
		else
		{
			x++;
		}
	}
	return (comp);
}
