#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this frees a list of members
 * @head: pointer to the list to be freed
 */

void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
