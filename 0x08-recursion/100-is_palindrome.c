#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: checked string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - it checks if a string is a palindrome
 * @s: checked string
 * @start: starting point
 * @end: end point
 * @flag: indeicates is if string is palindrome
 * Return: 0
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
		{
			*flag *= 1;
		}
		else
		{
			*flag *= 0;
		}
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculates string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int add = 0;

	if (*s != '\0')
	{
		add++;
		add += _strlen_recursion(s + 1);
	}
	return (add);
}
