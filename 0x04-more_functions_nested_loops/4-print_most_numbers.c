#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: Always 0 for success
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if ((y == 2) || (y == 4))
		{
			continue;
		}

		else
		{
			_putchar(y + '0');
		}
	}

	_putchar('\n');
}
