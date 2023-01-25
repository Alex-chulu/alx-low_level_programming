#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x);
	}
}
