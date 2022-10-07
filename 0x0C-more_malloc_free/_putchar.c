#include <unistd.h>

/**
 * _putchar - prints character to the standard output
 * @c: to be printed out
 * Return: 1 on success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
