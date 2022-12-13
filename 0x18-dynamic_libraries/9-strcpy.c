#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int chulu = 0;

	while (*(src + chulu) != '\0')
	{
		*(dest + chulu) = *(src + chulu);
		chulu++;
	}
	*(dest + chulu) = '\0';

	return (dest);
}
