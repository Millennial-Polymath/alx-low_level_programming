#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the address of the first node in a double linked list
 * @idx: index to add the new node
 * @n: value of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;


	if ((*h)->next == NULL && (*h)->prev == NULL)
		add_dnodeint(h, n);
	while (idx != 0 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
		add_dnodeint_end(&temp, n);
	else
	{
		newNode->next = temp;
		temp->prev->next = newNode;
		newNode->prev = temp->prev;
		temp->prev = newNode;
	}

	return (newNode);
}
