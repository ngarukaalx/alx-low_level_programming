#include "lists.h"

/**
 * free_dlistint - fuction name
 * @head: parameter
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;

		current = current->next;

		free(temp);
	}
}
