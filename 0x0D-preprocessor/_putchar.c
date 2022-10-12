#include <unistd.h>

/**
 * _putchar - print c to stdout
 * @c: to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
