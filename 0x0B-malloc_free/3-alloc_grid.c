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
	int e, x, y, z;
	int **alex;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		alex = (int **) malloc(height * sizeof(int *));

		if (!alex)
		{
			free(alex);
			return (NULL);
		}
		for (e = 0; e < height; e++)
		{
			alex[x] = (int *) malloc(width * sizeof(int));
			if (!alex[e])
			{
				for (x = 0; x <= e;  x++)
				{
					free(alex[x]);
				}
				free(alex);
				return (NULL);
			}
		}
		for (y = 0; y < height; y++)
		{
			for (z = 0; z < width; z++)
			{
				alex[y][z] = 0;
			}
		}
		return (alex);
	}
}
