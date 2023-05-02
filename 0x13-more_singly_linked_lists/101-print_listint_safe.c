#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t iterate_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);


/**
 *iterate_listint_len - this function counts the number of unique nodes
 *@head: A pointer to the head of the listint_t to check
 *Return: 0 on success else no of nodes
 */

size_t iterate_listint_len(const listint_t *head)
{
const listint_t *ptr1, *ptr2;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
	return (0);
ptr1 = head->next;
ptr2 = (head->next)->next;
while (ptr2)
{
if (ptr1 == ptr2)
{
ptr1 = head;
while (ptr1 != ptr2)
{
nodes++;
ptr1 = ptr1->next;
ptr2 = ptr2->next;
}
ptr1 = ptr1->next;
while (ptr1 != ptr2)
{
nodes++;
ptr1 = ptr1->next;
}
return (nodes);
}
ptr1 = ptr1->next;
ptr2 = (ptr2->next)->next;
}
return (0);
}

/**
 *print_listint_safe - this function prints a listint_t list
 *@head: A pointer to the head of the listint_t list
 *Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = iterate_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
