#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int x, y, z;

	x = strlen(str);
	if (x % 2 == 1)
	{
		y = x / 2 + 1;
	}
	else
	{
		y = x / 2;
	}
	for (z = y; z < x; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
