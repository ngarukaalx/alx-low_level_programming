#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint -  function that frees a listint_t list.
 * @head:head of list
 *
 * Return:void
 */

void free_listint(listint_t *head)
{
	listint_t *k = head, *next;

	while (k != NULL)
	{
		next = k->next;
		free(k);
		k = next;
	}



}
