#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the header of a listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_list = 0;

	while (h)
	{
		node_list++;
		printf("%d\n", h->node_list);
		h = h->next;
	}

	return (node_list);
}
