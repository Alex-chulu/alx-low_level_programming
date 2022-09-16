#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: triangle
 */
void print_triangle(int size)
{
	int xy, mn, jk;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (mn = 0; mn <= (size - 1); mn++)
		{
			for (xy = 0; xy < (size - 1) - mn; xy++)
			{
				_putchar(' ');
			}
			for (jk = 0; jk <= mn; jk++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
