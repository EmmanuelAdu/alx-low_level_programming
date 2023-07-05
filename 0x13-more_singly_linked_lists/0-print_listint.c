#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this function prints all elements in a linked list
 * @h: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0; /* this counts the number of elements in list */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
