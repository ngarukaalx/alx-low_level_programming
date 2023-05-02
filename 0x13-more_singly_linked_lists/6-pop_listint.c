#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * pop_listint -  function that deletes the head node of a listint_t linked
 * list
 * @head:head pointer
 *
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (n);
}
