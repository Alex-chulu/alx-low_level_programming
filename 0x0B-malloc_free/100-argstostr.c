#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: grid width
 * @av: grid height
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int num_count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			num_count++;
			b++;
		}
		a++;
	}
	num_count = num_count + ac + 1;
	str = malloc(sizeof(char) * num_count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
