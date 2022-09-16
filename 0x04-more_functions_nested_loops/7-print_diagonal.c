#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times character '\' should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int xy, mn;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (xy = 1; xy <= n; xy++)
		{
			for (mn = 1; mn < xy; mn++)
			{
				_putchar(' ');
			}

			_putchar('\\');
		}

		_putchar('\n');
	}
}
