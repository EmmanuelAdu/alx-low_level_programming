#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -this inserts a new node at the beginnning of a list
 * @head: serves as a pointer to first node of list
 * @n: node to insert
 *
 * Return: address of node else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_ptr; /* n_ptr - new pointer to allocate space for insert */

	n_ptr = malloc(sizeof(listint_t));

	if (n_ptr == NULL)
		return (NULL);
	n_ptr->n = n;
	n_ptr->next = *head;
	*head = n_ptr;

	return (n_ptr);
}



