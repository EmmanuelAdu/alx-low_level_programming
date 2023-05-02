#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a node at an index
 * @head: the pointer to the first node
 * @idx: index or position to insert the node
 * @n: the no. of data to insert
 * Return: the address of the node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pt;
	listint_t *n_ptr;
	listint_t *tempo = *head;

	n_ptr = malloc(sizeof(listint_t));

	if (n_ptr == NULL || head == NULL)
	{
		return (NULL);
	}

	n_ptr->n = n;
	n_ptr->next = NULL;

	if (idx == 0)
	{
		n_ptr->next = *head;
		*head = n_ptr;
		return (n_ptr);
	}
	for (pt = 0; tempo && pt < idx; pt++)
	{
		if (pt == idx - 1)
		{
			n_ptr->next = tempo->next;
			tempo->next = n_ptr;
			return (n_ptr);
		}
		else
			tempo = tempo->next;
	}
	return (NULL);
}
