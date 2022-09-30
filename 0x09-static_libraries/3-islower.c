#include "main.h"
/**
 *_islower - It checks for lowercase character
 *@c: int used as function argument
 *Return: 0 for success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
