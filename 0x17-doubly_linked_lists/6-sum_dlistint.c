#include "lists.h"
/**
 * sum_dlistint - finds the sum of all the data (n) of a linked list
 * @head: Address of the first node of the linked list
 *
 * Reurn: the sum, and 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);
}
