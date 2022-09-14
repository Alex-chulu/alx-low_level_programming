#include "main.h"
/**
 *print_alphabet - prints the alphabet
 *This function prints alphabet in lowercase
 * Return: On success 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
