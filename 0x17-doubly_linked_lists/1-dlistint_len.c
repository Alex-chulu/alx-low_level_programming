#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
