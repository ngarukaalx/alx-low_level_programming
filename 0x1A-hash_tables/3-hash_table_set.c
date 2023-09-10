#include "hash_tables.h"
/**
 * create_item - creates a new item
 * @key: key
 * @value: value to key
 *
 * Return: item created
 */

hash_node_t *create_item(const char *key, const char *value)
{
	char *dup_key;

	char *dup_value;

	hash_node_t *new_item;

	if (key == NULL || value == NULL)
		return (NULL);
	dup_key = strdup(key);

	dup_value = strdup(value);

	if (dup_key == NULL || dup_value == NULL)
	{
		free(dup_key);
		free(dup_value);
		return (NULL);
	}
	new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL)
	{
		free(dup_key);
		free(dup_value);
		return (NULL);
	}

	new_item->key = dup_key;
	new_item->value = dup_value;
	new_item->next = NULL;

	return (new_item);
}
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

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];

	dup_var = (value == NULL) ? NULL : strdup(value);
	if (dup_var == NULL && value != NULL)
		return (0);
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = dup_var;
			free(dup_var);
			return (1);
		}
		current_item = current_item->next;
	}
	dup_key = strdup(key);
	if (!dup_key)
	{
		return (0);
	}
	new_item = create_item(dup_key, dup_var);
	if (new_item == NULL)
	{
		free(dup_var);
		return (0);
	}
	new_item->next =  ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
