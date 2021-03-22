#include "lists.h"

/**
 * add_nodeint - adds a node at the end of the list int
 * @head: Pointer to the pointer of the first node
 * @n: Data to be added to the new node
 * Return: Address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}


	ptr->next = new_node;
	return (*head);
}
