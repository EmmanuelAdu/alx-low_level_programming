#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - insert a node at the beginning of a list
 * @head: pointer to the list
 * @str: pointer to  the string to be added
 * Return: address of the element
 * else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *begin;
	unsigned int l = 0; /* l- length of string */
	const char *ptr = str; /* ptr - pointer to string */

	while (*ptr++)
		l++;
	begin = malloc(sizeof(list_t));

	if (begin == NULL)
	{
		return (NULL);
	}

	begin->str = strdup(str);
	begin->len = l;
	begin->next = (*head);
	(*head) = begin;
	return (*head);
}
