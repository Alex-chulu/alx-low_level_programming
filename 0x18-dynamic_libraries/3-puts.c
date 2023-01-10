#include <stdio.h>
#include "main.h"

/**
 * _puts -  a function that prints a string
 * @str: string
 * Return: 0 (success)
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		putchar(*(str + x));
		x++;
	}
	putchar(10);
}
