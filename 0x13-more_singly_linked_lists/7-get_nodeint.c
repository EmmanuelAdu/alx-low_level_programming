#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - this function prints the node at an index
 * @head: the pointer to list
 * @index: the specified index starting from 0
 * Return: NULL if node is empty else the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
