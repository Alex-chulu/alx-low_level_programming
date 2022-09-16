#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character "_" should be printed
 * Return: 0 for success
 */
void print_line(int n)
{
	int xy;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (xy = 1; xy <= n; xy++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
