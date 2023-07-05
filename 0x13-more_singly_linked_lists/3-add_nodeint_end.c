#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - this function inserts a new node at the end of a list
 * @head: pointer to the list
 * @n: the number passed to the list
 * Return: NULL if it fails else a pointer to the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_list;
	listint_t *ptr = *head;

	end_list = malloc(sizeof(listint_t));

	if (end_list == NULL)
	{
		return (NULL);
	}
	end_list->n = n;
	end_list->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = end_list;
		return (end_list);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = end_list;
	return (end_list);
}
