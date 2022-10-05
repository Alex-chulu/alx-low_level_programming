#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the program's name
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_count = 0;

	if (argc > 0)
	{
		while (num_count < argc)
		{
			printf("%s\n", argv[num_count]);
			num_count++;
		}
	}
	return (0);
}
