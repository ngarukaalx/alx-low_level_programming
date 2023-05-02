#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head:pointer to head
 *
 * return void
 */

void free_listint2(listint_t **head)
{
	listint_t *k;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		k = *head;
		*head = k->next;
		free(k);
	}

	*head = NULL;
}
