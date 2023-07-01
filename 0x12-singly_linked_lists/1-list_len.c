#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns the number of elements in a linked list
 * @h: the pointer to the list
 * Return: the total number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t total_nb = 0;

	while (h != NULL)
	{
		total_nb++;
		h = h->next;
	}
	return (total_nb);
}
