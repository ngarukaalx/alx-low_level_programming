#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index -  function that deletes the node at index index
 * of a listint_t linked list.
 * @index:data to be deleted
 *
 * Return:1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int k;

	if (*head == NULL)
		return(-1);
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return(1);
	}
	prev = head;
	temp = prev->next;
	
	for (k = 0; temp != NULL && k <= index; k++)
	{
		if (k == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
	}
	return (-1);
}
