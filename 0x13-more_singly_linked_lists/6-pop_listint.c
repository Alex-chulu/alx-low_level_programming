#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the head of the list
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *axd;
	int x;

	if (*head == NULL)
		return (0);

	axd = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(axd);

	return (x);
}
