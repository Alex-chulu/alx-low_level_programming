#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int axd;

	for (axd = 0; axd < index; axd++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
