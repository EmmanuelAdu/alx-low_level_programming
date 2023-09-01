#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to the first node
 * @index: the index to delete the node
 * Return: 1 on success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	del_node = temp->next;
	temp->next = del_node->next;
	if (del_node->next != NULL)
	{
		del_node->next->prev = temp;
	}
	free(del_node);
	return (1);
}
