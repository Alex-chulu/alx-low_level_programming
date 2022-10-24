#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: points to the head of list
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t x;
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (x = 0; str[x]; x++)
		;
	new_n->len = x;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}
