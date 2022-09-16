#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Return: Always 0 for success
 */
int main(void)
{
	int y;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (y = 1; y <= 100; y++)
	{
		if (y == 100)
		{
			printf("%s", buzz);
		}

		else if ((y % 3 == 0) && (y % 5 == 0))
		{
			printf("%s", fizzbuzz);
		}

		else if (y % 3 == 0)
		{
			printf("%s", fizz);
		}

		else if (y  % 5 == 5)
		{
			printf("%s", buzz);
		}

		else
		{
			printf("%d", y);
		}
	}

	printf("\n");

	return (0);
}
