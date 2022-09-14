#include "main.h"
/**
 *print_alphabet_10 - prints alphabet 10 times
 *
 *Return: 0 always success
 */
void print_alphabet(void)
{
	char a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
		_putchar(b);
		}
		_putchar('\n');
	}
}
