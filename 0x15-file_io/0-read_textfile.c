#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to file name
 * @letters: number of leeters to be read and print
 * Return: if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *cp;

	if (filename == NULL)
		return (0);

	cp = malloc(sizeof(char) * letters);
	if (cp == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, cp, letters);
	z = write(STDOUT_FILENO, cp, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(cp);
		return (0);
	}

	free(cp);
	close(x);

	return (z);
}
