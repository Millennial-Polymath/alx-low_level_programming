#include "lists.h"
/**
 * list_len - counts the  of elements in a linked list_t
 * @h: head node
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	int count;

	count = 0;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}
