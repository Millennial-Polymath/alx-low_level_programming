#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: pointer to the head node
 * @n: value stored in the new node
 *
 * Return: Address of the new element, or NUll if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (*head);
}
