#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @c: int used as function argument
 * Return: 0 for success
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}

	else
	{
	return (c * -1);
	}
}
