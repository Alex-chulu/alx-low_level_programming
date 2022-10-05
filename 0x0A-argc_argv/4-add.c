#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - string checking
 * @str: string
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int num_count;

	num_count = 0;

	while (num_count < strlen(str))
	{
		if (!isdigit(str[num_count]))
		{
			return (0);
		}
		num_count++;
	}
	return (1);
}

/**
 * main - function that prints the program name
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_count;
	int str_to_int;
	int sum = 0;

	num_count = 1;

	while (num_count < argc)
	{
		if (check_num(argv[num_count]))
		{
			str_to_int = atoi(argv[num_count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		num_count++;
	}
	printf("%d\n", sum);
	return (0);
}
