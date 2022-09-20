#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0 (success)
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		putchar(*(s + length));
	}
	putchar(10);
}
