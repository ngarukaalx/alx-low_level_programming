#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index -  function that inserts a new node at a given
 * position.
 * @head:pointer to head
 * @idx:index of the list where the new should be added
 * @n:data to the new node
 *
 * Return:the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;

	listint_t *new_node, *prev_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = *head;

	for (k = 0; k < idx - 1 && *head != NULL; k++)

		head = &(*head)->next;
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
