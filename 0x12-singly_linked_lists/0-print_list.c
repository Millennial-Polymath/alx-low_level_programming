#include "lists.h"
/**
 * print_list - prints all elements in list_t
 * @h: The head node
 *
 * Return: returns the total number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	const list_t *current_node = h;

	count = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{

			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		count++;
	}
	return (count);

}
