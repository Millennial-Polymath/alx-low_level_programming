#include "lists.h"
/**
 * dlistint_len - Finds the number of elements in a linked list
 * @h: Pointer to the first node
 *
 * Return: Number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
