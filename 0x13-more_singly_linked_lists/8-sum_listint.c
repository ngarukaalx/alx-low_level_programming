#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint -  a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head:pointer to head
 *
 * Return:returns the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *current;

	int sum = 0;

	current = head;

	if (head == 0)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
