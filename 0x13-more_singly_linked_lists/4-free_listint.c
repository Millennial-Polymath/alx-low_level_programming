#include "lists.h"

/**
 * free_listint - Frees a listint
 * @head: pointer to the first node
 *
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;


	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;

	}

}
