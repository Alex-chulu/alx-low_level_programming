#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fn);

/**
 * create_buffer - alocate memory space
 * @file: name of file in a buffer
 * Return: pointer to the buffer
 */

char *create_buffer(char *file)
{
	char *cp;

	cp = malloc(sizeof(char) * 1024);

	if (cp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (cp);
}

/**
 * close_file - closes fie descriptors
 * @fn: file descriptor to be closed
 */

void close_file(int fn)
{
	int x;

	x = close(fn);

	if (x == -1)
	{
		dprintf("Error: Can't closefn %d\n", fn);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always for success
 */

int main(int argc, char *argv[])
{
	int past_dest, dest, x, y;
	char *cp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: coppy file_from file_to\n");
		exit(97);
	}

	cp = create_buffer(argv[2]);
	past_dest = open(argv[1], O_RDONLY);
	x = read(past_dest, cp, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (past_dest == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(cp);
			exit(99);
		}

		x = read(past_dest, cp, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(cp);
	close_file(past_dest);
	close_file(dest);

	return (0);
}
