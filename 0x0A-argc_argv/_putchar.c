#include <unistd.h>

/**
 * _putchar - prints c to standart out
 * @c: character to be prented
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
