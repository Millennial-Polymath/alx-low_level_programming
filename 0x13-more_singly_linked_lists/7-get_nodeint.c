#include "lists.h"

/**
 * get_nodeint_at_index - iterates to the nth node of a list
 * @head: Pointer to the first node
 * @index: Index of a node to return
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
