#include "lists.h"

/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list
 * @head: head of linked list
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *a_node;
	size_t x;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	new_n->len = x;
	new_n->next = NULL;
	a_node = *head;

	if (a_node == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (a_node->next != NULL)
			a_node = a_node->next;
		a_node->next = new_n;
	}
	return (*head);
}
