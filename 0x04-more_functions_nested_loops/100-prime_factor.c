#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - print the largest prime number
 * Return: Always 0
 */

int main(void)
{
	long prime = 612852475143, dive;

	while (dive < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (dive = 3; dive < (prime / 2); dive += 2)
		{
			if ((prime % dive) == 0)
				prime /= dive;
		}
	}
	printf("%1d\n", prime);
	return (0);
}
