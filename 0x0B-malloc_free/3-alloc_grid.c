#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: grid width
 * @height: grid height
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **gd;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gd = malloc(sizeof(int *) * height);

	if (gd == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		gd[x] = malloc(sizeof(int) * width);
		if (gd[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(gd[x]);
			}
			free(gd);
			return (NULL);
		}
	}
	for (y = 0; y < width; y++)
	{
		gd[x][y] = 0;
	}
	return (gd);
}
