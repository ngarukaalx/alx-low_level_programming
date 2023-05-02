#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index -  function that returns the nth node
 * of a listint_t linked list.
 * @head:head pointer
 * @index:index of the node
 *
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *j;

	unsigned int k = 0;

	j = head;

	while (j != NULL && k < index)
	{
		j = j->next;
		k++;
	}
	if (j == NULL)
	{
		return (NULL);
	}
	else
	{
		return (j);
	}
}
