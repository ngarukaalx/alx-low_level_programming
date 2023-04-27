#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head:head to list
 *
 * Return:void
 */

void free_list(list_t *head)
{
	list_t *i = head;

	while (i != NULL)
	{
		list_t *temp = i->next;
			free(i);
		i = temp;
	}
}
