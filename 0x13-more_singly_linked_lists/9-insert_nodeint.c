#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new
 * node at a given position.
 * @head: pointer to the head of the list
 * @idx: is the index of the list where the new
 * node should be added. Index starts at 0
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *dup = *head;
	unsigned int nd;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = dup;
		*head = new_node;
		return (new_node);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	new_node->next = dup->next;
	copy->next = new_node;

	return (new_node);
}
