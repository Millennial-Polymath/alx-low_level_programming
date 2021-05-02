#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: pointer to the address of the head node
 * @n: Value of the new node
 *
 * Return: Address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = *head;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
		newNode->prev = temp;
		temp = newNode;
	}
	return (temp);
}
