#include "main.h"

/**
 * _strlen - array count
 * @s: string 
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strcpy - copy array
 * @src: array element
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: elements of array
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *alex;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	alex = (char *) malloc(sizeof(char));

	if (alex == 0)
	{
		return (NULL);
	}
	_strcpy(alex, str);
	retun (alex);
}
