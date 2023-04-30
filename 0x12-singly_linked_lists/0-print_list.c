#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints the list of list_h
 * @h: pointer to the list_h contents
 *
 * Return: no. of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t siz = 0; /*  siz - is size of list */

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;

		siz++;
	}
	return (siz);
}
