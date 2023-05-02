#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node at an index
 * @head: pointer to the first node
 * @index: index or position to be deleted
 * Return: on success 1, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pt;
	listint_t *n_ptr = NULL;
	listint_t *tempo = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	for (pt = 0; pt < index - 1; pt++)
	{
		if (tempo == NULL || tempo->next == NULL)
			return (-1);
		tempo = tempo->next;
	}

	n_ptr = tempo->next;
	tempo->next = n_ptr->next;
	free(n_ptr);

	return (1);
}
