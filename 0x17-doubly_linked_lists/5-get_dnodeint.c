#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: pointer to the head
 * @index: the index at which the func. looks for
 * Return: address of index else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i, size = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	temp = head;

	if (index >= size)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
