#include "lists.h"
/**
 * listint_len - Counts the number of elements
 * @h: pointer to the head node
 *
 * Return:the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
