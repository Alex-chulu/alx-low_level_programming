#include "main.h"
/**
 * _isalpha - It checks for alphabetic character
 *
 * @c: int  used as function argument
 * Return: 0 for success
 */
int  _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
