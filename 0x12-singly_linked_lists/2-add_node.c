#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - this function adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: new string to add in the node
 * Return: the address of the new element else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /* this is the new created node */
	unsigned int ptr = 0; /* for looking through the list */

	while (str[ptr])
	{
		ptr++;
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = ptr;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
