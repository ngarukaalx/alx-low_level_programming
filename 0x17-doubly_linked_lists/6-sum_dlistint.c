#include "lists.h"
/**
 * sum_dlistint - fuction name
 * @head: parameter
 *
 * Return: sum or 0 on failure
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	int sum = 0;

	if (head == NULL)
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
