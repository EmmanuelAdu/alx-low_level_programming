#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - this function prints all the members of a list
 * @h: pointer to the list
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nb; /* nb - number of nodes to print */

	nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
