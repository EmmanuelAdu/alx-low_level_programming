#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t
 * @head: this function that frees a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while ((*head))
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
	(*head) = NULL;
}
