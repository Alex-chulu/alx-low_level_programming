#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s:string to be modified
 * @to: the value to be assigned
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
