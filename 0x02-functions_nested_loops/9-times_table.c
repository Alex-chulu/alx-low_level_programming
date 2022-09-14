#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always 0
 */
void times_table(void)
{
	int num, multi, produc;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			produc = num * multi;
			if (produc <= 9)
			{
				_putchar(' ');
			else
				_putchar((produc / 10) + '0');

			_putchar((produc % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
