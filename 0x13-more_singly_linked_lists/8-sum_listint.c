#include "lists.h"

/**
 * sum_listint - Adds up aall data stored in a linked list
 * @head: pointer to the first node of a list
 * Return: Returns the sum of all data upon success and 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;
	int n;




	temp = head;

	sum = 0;


	while (temp != NULL)
	{

		n = temp->n;
		sum += n;
		temp = temp->next;
	}
	return (sum);
}
