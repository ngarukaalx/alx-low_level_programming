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
	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));

	item->key = (char *)malloc(strlen(key) + 1);

	item->value = (char *)malloc(strlen(value) + 1);

	strcpy(item->key, key);

	strcpy(item->value, value);

	return (item);
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
	char *dup_var = strdup(value);

	hash_node_t *item = create_item(key, dup_var);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *current_item = ht->array[index];

	if (value == NULL || key == NULL)
	{
		return (0);
	}

	if (current_item == NULL)
	{
		item->next = NULL;
		ht->array[index] = item;
	}
	else
	{

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
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);

}
