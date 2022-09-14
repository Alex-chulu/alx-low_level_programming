#include "main.h"
/**
 *_isalphabet - It checks for alphabetic character
 *
 * @c: int  used as function argument
 * Return: 0 for success
 */
int _isalphabet(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
		return (1);
		}
		else
		{
		return (0);
		}
}
