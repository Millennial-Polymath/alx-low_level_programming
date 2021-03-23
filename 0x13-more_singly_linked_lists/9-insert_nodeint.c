#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * @head: pointer to the pointer to the head node
 * @idx: Index of the list where the new node should be added
 * @n: Data to be passed to the new node
 * Return:Address opf the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count;


	new_node = (listint_t *)(malloc(sizeof(listint_t)));
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	count = 0;

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (count < (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
