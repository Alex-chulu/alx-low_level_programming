#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	char y;
	int i;

	srand(time(0));

	while (i <= 2788)
	{
		y = rand() % 128;
		i += y;
		putchar(y);
	}
	putchar(2772 - i);

	return (0);
}
