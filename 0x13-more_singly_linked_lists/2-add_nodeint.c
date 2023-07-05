#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - this function inserts a new node at the beginning of a list
 * @head: the double pointer to the list
 * @n: the elements passed to the function
 * Return: NULL if it fails else the address of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = (*head);
	(*head) = new_list;
	return (new_list);
}
