#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
