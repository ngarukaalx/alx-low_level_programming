#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head:pointer
 *
 * Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	while (*head)
	{
		temp = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = temp;
	}
	*head = prev;
	return (*head);
}
