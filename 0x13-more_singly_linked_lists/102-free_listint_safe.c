#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - this frees a list in a loop
 * @h: double pointer to the list
 * Return: size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t pt = 0;
	int nb = 0;
	listint_t *n_ptr;

	n_ptr = *h;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		if (nb > 0)
		{
		pt = *h - (*h)->next;
		free(*h);
		*h = n_ptr;
		pt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			pt++;
			break;
		}
	}
	*h = NULL;
	return (pt);
}
