#include "main.h"
/**
 *print_last_digit -  prints the last digit of a number.
 *@x: number to be used
 *Return: 0 for success
 */
int print_last_digit(int x)
{
	int last_digit_num = x % 10;

	if (last_digit_num < 0)
	{
		last_digit_num *= -1;
		
	}

	_putchar(last_digit_num + '0');

	return (last_digit_num);
}
