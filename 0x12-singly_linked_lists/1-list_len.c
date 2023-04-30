#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - this is the length of the node
 * @h: a pointer to the node or list
 * Return: number of list
 */

size_t list_len(const list_t *h)
{
	size_t nb = 0; /* nb - number of size of list */

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
