#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Adress of the head node
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);

	}

}
