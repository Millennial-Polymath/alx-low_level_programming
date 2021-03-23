#include "lists.h"
/**
 * free_listint2 - Frees a list listint_t list
 * @head: pointer to the pointer of the head node
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	current_node = *head;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(*head);
		*head = NULL;
		*head = current_node;

	}

}
