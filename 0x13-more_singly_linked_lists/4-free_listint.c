#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this function frees a list
 * @head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
