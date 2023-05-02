#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - this reverses a list
 * @head: pointer to the first node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last; /* Last node */
	listint_t *last_b1; /* last but 1 node */

	last = NULL;
	last_b1 = NULL;

	while (*head)
	{
		last = (*head)->next;
		(*head)->next = last_b1;
		last_b1 = *head;
		*head = last;
	}
	*head = last_b1;

	return (*head);
}
