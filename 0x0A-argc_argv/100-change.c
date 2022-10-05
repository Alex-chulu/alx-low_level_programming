#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int pos, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (total >= coins[pos])
		{
			aux = (total / coins[pos]);
			change += aux;
			total -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
