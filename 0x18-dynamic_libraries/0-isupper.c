#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the input
 * Return: Always 0 for success
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
