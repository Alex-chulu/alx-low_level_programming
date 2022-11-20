#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100
 * Return: 0 (success)
 */

int main(void)
{
	int y;
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fbz[] = "FizzBuzz";

	for (y = 1; y <= 100; y++)
	{
		if (y == 100)
			printf("%s", bu);
		else if ((y % 3 == 0) && (y % 5 == 0))
			printf("%s ", fbz);
		else if (y % 3 == 0)
			printf("%s ", fi);
		else if (y % 5 == 0)
			printf("%s ", bu);
		else
			printf("%d ", y);
	}
	printf("\n");
	return (0);
}
