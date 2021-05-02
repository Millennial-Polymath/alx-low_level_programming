#include "lists.h"
/**
 * print_dlistint - prints all elements in a list
 * @h: pointer to the head node
 *
 * Return: returns the number of elements in a node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
