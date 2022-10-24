#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *a_node;

	while ((a_node = head) != NULL)
	{
		head = head->next;
		free(a_node->str);
		free(a_node);
	}
}
