#include <stdio.h>
#include "lists.h"

/**
 * listint_len - this function returns the number of nodes printed
 * @h: pointer to the list
 * Return: the number of nodes printed
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
