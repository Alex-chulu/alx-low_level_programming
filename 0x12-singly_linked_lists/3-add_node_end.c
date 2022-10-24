#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list
 * @head: head of linked list
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupp;
	int n;
	list_t *new_n, *last_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	dupp = strdup(str);
	if (str == NULL)
	{
		free(new_n);
		return (NULL);
	}
	for (n = 0; str[n];)
		n++;

	new_n->str = dupp;
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
			last_n = last_n->next;
		last_n->next = new_n;
	}

	return (*head);
}
