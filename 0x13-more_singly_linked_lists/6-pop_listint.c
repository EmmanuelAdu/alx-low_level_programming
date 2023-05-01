#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this function deletes the first node of linked list
 * @head: pointer to the first node
 * Return: 0 when list is empty else return the elements in the list
 */

int pop_listint(listint_t **head)
{
	listint_t *n_ptr;
	int nb;

	if (head == NULL || *head == NULL)
		return (0);

	nb = (*head)->n;
	n_ptr = (*head)->next;
	free(*head);
	*head = n_ptr;

	return (nb);
}
