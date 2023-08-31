#include "lists.h"

/**
 * free_dlistint - this function frees a linked list
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
