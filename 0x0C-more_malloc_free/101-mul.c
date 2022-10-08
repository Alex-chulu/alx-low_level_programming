#include "main.h"

/**
 * main - a program that multiplies two positive numbers
 * @argc: argument count
 * @argv: argument
 * Return:0
 */

int main(int argc, char *argv[])
{
	unsigned long multi;
	int x, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (x = 1; x < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] > 57 || argv[x][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multi =  atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multi);

	return (0);
}
