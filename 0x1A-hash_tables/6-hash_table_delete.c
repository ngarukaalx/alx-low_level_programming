#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *items;

	hash_node_t *temp;
	
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		items = ht->array[i];
		while (items != NULL)
		{
			temp = items;
			items = items->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
}
