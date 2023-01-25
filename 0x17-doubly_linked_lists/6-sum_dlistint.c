#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n)
 * of a doubly linked list
 * @head: Head of the list
 * Return: The sum of the data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data;

	sum_data = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_data += head->n;
			head = head->next;
		}
	}

	return (sum_data);
}
