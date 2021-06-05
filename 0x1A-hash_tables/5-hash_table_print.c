#include "hash_tables.h"
/**
 * hash_table_print - prints a hash_table
 * @ht: The hash table to be printed
 *
 * Return: Void(nothing)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (node->key == NULL)
					break;
				if (flag == 0)
					flag = 1;
				else
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);

				node = node->next;
			}

		}

		printf("}\n");
	}
}
