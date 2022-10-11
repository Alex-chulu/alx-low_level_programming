#include <unistd.h>

/**
 * _putchar - prints C to the standard output
 * @c: to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
