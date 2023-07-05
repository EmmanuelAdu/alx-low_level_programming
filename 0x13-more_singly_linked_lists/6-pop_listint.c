#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this function deletes the head of a node
 * @head: double pointer to list
 * Return: the head's node data n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (num);
}
