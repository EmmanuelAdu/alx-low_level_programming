#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - this frees a list
 * @head: this is the pointer to the first node been linked to the others
 */

void free_listint(listint_t *head)
{
	listint_t *tempo; /* this is a temporary node to the linked list */

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
