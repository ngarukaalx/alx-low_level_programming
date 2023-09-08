#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * in the order that they appear in the array of hash table
 * If ht is NULL, don’t print anything
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int print = 0;

	unsigned long int i = 0;

	hash_node_t *traverse;

	if (ht == NULL)
		return;

	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		traverse = ht->array[i];
		while (traverse != NULL)
		{
			if (print)
			{
				printf(", ");
			}
			printf("'%s': '%s'", traverse->key, traverse->value);
			print = 1;
			traverse = traverse->next;
		}
	}
	printf("}");
	putchar(10);
}
