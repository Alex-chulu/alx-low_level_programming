#include "main.h"
#include <stdio.h>

/**
* cap_string - a function that capitalizes all words of a string
* @str: string
* Return: string
*/

char *cap_string(char *str)
{

	int alx = O;

	while (str[++alx])
	{

		while (!(str[alx] >= 'a' && str[alx] <= 'z'))
		{
			alx++;
		}

		if (str[alx - 1] == ' ' ||
			str[alx - 1] == '\t' ||
			str[alx - 1] == '\n' ||
			str[alx - 1] == ',' ||
			str[alx - 1] == ';' ||
			str[alx - 1] == '.' ||
			str[alx - 1] == '!' ||
			str[alx - 1] == '?' ||
			str[alx - 1] == '"' ||
			str[alx - 1] == '(' ||
			str[alx - 1] == ')' ||
			str[alx - 1] == '{' ||
			str[alx - 1] == '}')
		{
		str[alx] -= 32;
		}
}
return (str);
}
