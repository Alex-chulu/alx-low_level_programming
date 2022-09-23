#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int alx = 0, chu;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++alx])
	{
		for (chu = 0; chu <= 7; chu++)
		{
			if (str[alx] == leet[chu] ||
			str[alx] - 32 == leet[chu])
			{
				str[alx] = chu + '0';
			}
		}
	}
	return (str);
}
