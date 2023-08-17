#include "lists.h"

/**
 * delete_start - fuction ame
 * @head: pointer
 */

void  delete_start(dlistint_t **head)
{

	dlistint_t *current = *head;

	if (*head != NULL)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
	}
}

/**
 * delete_dnodeint_at_index  - fuction name
 * @head: h pointer
 * @index: index to delete
 *
 * Return: 1 on sucees or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int count = 0;

	dlistint_t *current = *head;

	if (index == 0)
	{
		delete_start(head);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	else
	{
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		free(current);
		return (1);
	}
	return (-1);
}
