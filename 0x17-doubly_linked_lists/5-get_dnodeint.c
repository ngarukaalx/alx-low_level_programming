#include "lists.h"

/**
 * get_dnodeint_at_index - fuction name
 * @head: parameter
 * @index: paramenter
 *
 * Return: adress of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	unsigned int i = 0;

	if (head == NULL || index < 1)
	{
		return (NULL);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);

}
