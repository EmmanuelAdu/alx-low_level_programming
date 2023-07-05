#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - this function reverses a linked list
 * @head: double pointer to the list
 * Return: pointer to the linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = current;
	}
	(*head) = previous;
	return (*head);
}
