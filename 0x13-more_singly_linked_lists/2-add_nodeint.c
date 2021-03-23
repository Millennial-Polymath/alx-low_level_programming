#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: pointer to the pointer of the head node
 * @n: Data to be added to the new node
 * Return:returns the pointer to the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)(malloc(sizeof(listint_t)));
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;


	*head = new_node;

	return (*head);
}
