#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string
 * Return 0
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
		{
			putchar(*(str + x));
		}
		x++;
	}
	putchar(10);
}
