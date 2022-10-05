#include <unistd.h>

/**
 * _putchar - prints c to the standard output
 * @c: to be printed
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
