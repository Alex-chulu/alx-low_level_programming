#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - length of a string
 * @str: string to be measured
 * Return: string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string
 * @dest: buffer storing the string
 * @src: string source
 * Return: pointer
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] != '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		return (NULL);
	}
	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcopy(dogg->owner, owner);
}
