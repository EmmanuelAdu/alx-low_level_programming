#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - this function inserts a node at the end
 * @head: double pointer to the list
 * @str: the string to insert into the node
 * Return: address of the element to insert the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	unsigned int ptr = 0;

	while (str[ptr])
	{
		ptr++;
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = ptr;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
