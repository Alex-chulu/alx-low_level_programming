#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the largest prime number
 * Return: Always 0
 */

int main(void)
{
	long prim = 612852475143, dive;

	while (dive < (prim / 2))
	{
		if ((prim % 2) == 0)
		{
			prim /= 2;
			continue;
		}

		for (dive = 3; dive < (prim / 2); dive += 2)
		{
			if ((prim % dive) == 0)
				prim /= dive;
		}
	}
	printf("%1d\n", prim);
	return (0);
}
