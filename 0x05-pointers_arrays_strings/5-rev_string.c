#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s:string
 * Return: 0
 */

void rev_string(char *s)
{
	char tmp;
	int a, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}
	for (a = 0; a < len1 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}
