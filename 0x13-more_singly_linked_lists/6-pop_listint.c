#include "lists.h"
/**
 *pop_list - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the head
 *
 * Return: The head node's data (n) and ) if the linked list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if ((*head) == NULL || head == NULL)
	{
		return (0);
	}

	if ((*head)->next == NULL)
	{
		*head = NULL;
		free(*head);
	}
	n = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = NULL;

	*head = current;


	return (n);
}
