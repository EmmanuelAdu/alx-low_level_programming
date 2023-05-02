#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - this function returns a particular node
 * @head: pointer to first node
 * @index: index or the position of node
 * Return: pointer to node of index else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0; /* pos serves to traverse to the index */
	listint_t *n_ptr;

	n_ptr = head;
	while (n_ptr && pos < index)
	{
		n_ptr = n_ptr->next;
		pos++;
	}
	if (n_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (n_ptr);
	}
}
