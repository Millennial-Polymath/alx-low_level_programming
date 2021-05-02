#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @index: the index of the node that should be deleted
 * @head: pointer to the first node in the list
 *
 * Return: 1 upon success anf -1 upon failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;
	dlistint_t  *current;

	if (index == 0 && (*head)->next  == NULL)
	{
		free(temp);
		*head = NULL;
		return (1);
	}

	if (index == 0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	if (index > 0)
	{
		while (count < index && temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		current = temp->prev;
		current->next = temp->next;
		temp->next->prev = current;
	}
	return (1);
}
