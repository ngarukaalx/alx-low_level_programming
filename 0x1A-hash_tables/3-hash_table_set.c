#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * In case of collision, add the new node at the beginning of the list
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *current_item;

	char *dup_var, *dup_key;

	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	dup_var = strdup(value);

	if (dup_var == NULL)
		return (0);
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = dup_var;
			return (1);
		}
		current_item = current_item->next;
	}
	new_item = calloc(1, sizeof(hash_node_t));
	if (new_item == NULL)
	{
		free(dup_var);
		return (0);
	}
	dup_key = strdup(key);
	if (!dup_key)
	{
		return (0);
	}
	new_item->key = dup_key;
	new_item->value = dup_var;
	new_item->next =  ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
