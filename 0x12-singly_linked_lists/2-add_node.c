#include "lists.h"
/**
 * add_node - adds a new node at the top
 * @str: the string to be passed
 * @head: pointer to the pointer to the head node
 * Return: pointer to base address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;



	new_node = (list_t *)(malloc(sizeof(list_t)));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (str == NULL && strdup(str) == NULL)
		return (NULL);

	new_node->next = *head;
	if (head == NULL)
	{
		new_node->next = NULL;
	}
	new_node->len = strlen(str);
	*head = new_node;

	return (*head);
}
