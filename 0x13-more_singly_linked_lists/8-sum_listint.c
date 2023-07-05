#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - this function returns the sum of all elements in the list
 * @head: the pointer to the list
 * Return: the sum of the list or 0 when list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
