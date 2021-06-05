#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL, *temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (node->key != NULL)
				free(node->key);
			if (node->value != NULL)
				free(node->value);
			temp = node;
			node = node->next;
			free(temp);
		}

	}
	free(ht->array);
	free(ht);
}
