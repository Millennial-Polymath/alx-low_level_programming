#include "lists.h"
/**
 * get_dnodeint_at_index - Finds the node at a given position
 * @head:  pointer to the first node in the list
 * @index:  nth position of the node
 * Return: The nth  node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
