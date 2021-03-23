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
	listint_t *temp;

	count = 0;
	temp = head;


	while (temp != NULL)
	{
		if (head == NULL)
			return (NULL);

		temp = temp->next;
		count++;

		if (count >= index)
			break;
	}
	return (temp);
}
