#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - this returns the number of elements in list
 * @h: pointer to the list
 * Return: no. of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nb = 0; /* nb - size or no of nodes */

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
