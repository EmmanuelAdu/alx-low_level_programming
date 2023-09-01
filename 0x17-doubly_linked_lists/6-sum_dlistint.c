#include "lists.h"

/**
 * sum_dlistint - Returns the sum of elements in a dlinked list
 * @head: pointer to first node
 * Return: the sum of elements in list else 0 when list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int i, size = 0;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	temp = head;
	for (i = 0; i < size; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
