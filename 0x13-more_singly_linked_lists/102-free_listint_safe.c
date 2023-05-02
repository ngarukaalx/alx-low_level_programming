#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe -  a function that frees a listint_t list.
 * @h:pointer
 *
 * Return:the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	listint_t *cur, *next;

	if (!(h || *h))
		return (count);

	cur = *h;
	while (cur)
	{
		next = cur->next;
		free(cur);
		count++;
		if (next >= cur)
		{
			*h = NULL;
			break;
		}
		cur = next;
	}
	*h = NULL;
	return (count);
}
