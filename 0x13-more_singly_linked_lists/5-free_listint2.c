#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - this function frees a list and sets head to NULL
 * @head: pointer to list and been set to  NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *n_ptr; /* temporary pointer to the linked list */

	if (head == NULL)
		return;

	while (*head)
	{
		n_ptr = (*head)->next;
		free(*head);
		*head = n_ptr;
	}
	*head = NULL;
}
