#include <stdio.h>

/**
 * tortoise - prints string before main executes
 */

void __attribute__((constructor)) tortoise()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
