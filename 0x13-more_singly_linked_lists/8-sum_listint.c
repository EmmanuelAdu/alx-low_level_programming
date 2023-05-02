#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - this sum all the data in the list
 * @head: the pointer to the first node
 *Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *n_ptr = head;

	int sum = 0;

	while (n_ptr)
	{
		sum += n_ptr->n;
		n_ptr = n_ptr->next;
	}
	return (sum);
}
