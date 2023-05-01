#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - this inserts a new node at the end of a list
 * @head: pointer to the first node of the list
 * @n: the value of new node to insert
 * Return: the address of new element else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_ptr; /* new pointer to the new node */
	listint_t *tempo; /* temporary pointer to the main node */

	tempo = *head;

	n_ptr = malloc(sizeof(listint_t));

	if (n_ptr == NULL)
		return (NULL);

	n_ptr->n = n;
	n_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = n_ptr;
		return (n_ptr);
	}
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = n_ptr;
	return (n_ptr);
}
