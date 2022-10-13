#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 *@argc: argument count
 *@argv: argument
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, result;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(x, y);

	printf("%d\n", result);

	return (0);
}
