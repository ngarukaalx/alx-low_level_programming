#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe -  a function that prints a listint_t linked list.
 * @head:headpointer
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;

	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current > current->next)
		{
			current = current->next;
		}
		else
		{
			current = current->next;
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

	}
	return (count);
}
