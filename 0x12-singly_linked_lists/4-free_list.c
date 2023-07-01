#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - this function frees a linked list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
