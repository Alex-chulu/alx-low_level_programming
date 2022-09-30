#include <unistd.h>

/**
 * _putchar - writes to output
 * @c: charater to be printed
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
