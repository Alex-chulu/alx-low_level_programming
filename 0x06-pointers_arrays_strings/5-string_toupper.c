#include "main.h"

/**
 *string_toupper - a function that changes all lowercase
 *letters of a string to uppercase.
 *@str: string parameter
 *Return: string
 */

char *string_toupper(char *str)
{
	int alx = 0;

	while (str[alx++])
	{
		if (str[alx] >= 'a' && str[alx] <= 'z')
		{
			str[alx] -= 32;
		}
	}
	return (str);
}
