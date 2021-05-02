#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the address of the first node in a double linked list
 * @idx: index to add the new node
 * @n: value of the new node
 * Return: the address of the New node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *newNode;
	dlistint_t *temp = *h;
	unsigned int count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;


	if (idx == 0)
		newNode = add_dnodeint(h, n);

	while (count < idx && temp != NULL)
	{
		temp = temp->next;
		count++; /* find the pointer at index */
	}

	if (temp->next == NULL && temp->prev != NULL)
		newNode = add_dnodeint_end(&temp, n);
	else
	{
		newNode->next = temp;
		temp->prev->next = newNode;
		newNode->prev = temp->prev;
		temp->prev = newNode;
	}
		return (newNode);
}
