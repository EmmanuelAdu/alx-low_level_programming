#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node at an index
 * @head: double pointer to the list
 * @index: index to delete the node
 * Return: 1 on success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *more_ptr = NULL;
	unsigned int l = 0;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	for (l = 0; ptr && l < index; l++)
	{
		if (l == (index - 1))
		{
			more_ptr = ptr->next;
			ptr->next = more_ptr;
			free(more_ptr);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
