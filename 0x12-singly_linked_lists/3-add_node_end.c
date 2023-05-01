#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - this adds a string to end of a list
 * @head: pointer to the first member of list
 * @str: pointer to the string to be added
 * Return: address of string or
 * else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *diff; /* diff - pointer to new string */
	list_t *temp;
	unsigned int l = 0; /* l - length of the string to insert */
	const char *ptr = str;

	while (*ptr++)
		l++;

	/* setting temporary pointer to the head */
	temp = *head;
	diff = malloc(sizeof(list_t));
	if (diff == NULL)
	{
		return (NULL);
	}
	diff->str = strdup(str);
	diff->len = l;
	diff->next = NULL;

	if (!(*head)) /* if head is NULL */
	{
		*head = diff; /* set head pointer to new node and return new node */
		return (diff);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = diff;
	return (diff);
}
