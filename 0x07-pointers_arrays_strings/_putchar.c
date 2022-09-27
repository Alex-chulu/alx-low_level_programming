#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - prints character c to standard output
 * @c: character to be printed
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
