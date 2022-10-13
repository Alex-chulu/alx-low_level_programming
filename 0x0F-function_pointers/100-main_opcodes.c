#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char alx;

	if (argc != 2)
	{

		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	alx = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", alx[x]);
			break;
		}
		printf("%02hhx ", alx[x]);
	}
	return (0);
}
