#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
