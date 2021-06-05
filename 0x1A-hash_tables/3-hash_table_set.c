#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key. Must be duplicated and can be
 * an empty string
 *
 * Return: 1 upon succwss and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *temp = NULL;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	/* Obtain the index using the key_index function */

	index = key_index((const unsigned char *)key, ht->size);
	/* initialise temp to the head node of the linked list */
	temp = ht->array[index];

	/* Traverse through the list looking for a matching key*/
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			/* if the key is matching, replace the value */
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	/* Allocate some memory for the new_node to be insert in the hash table */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);


	/* assign values to the corresponding fields of the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);


	/* insert node into the hash table at that index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
