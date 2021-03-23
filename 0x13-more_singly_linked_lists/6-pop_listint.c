#include "lists.h"
/**
 *pop_list - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the head
 *
 * Return: The head node's data (n) and ) if the linked list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *sec_node;
	if ((*head) == NULL)
	{
		return (0);
	}

	sec_node = (*head)->next;
	free(*head);
	*head = NULL;

	*head = sec_node;
	return (sec_node->n);
}
