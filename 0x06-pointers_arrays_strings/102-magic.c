#include <stdio.h>

/**
 * main - the program prints a[2] = 98, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
