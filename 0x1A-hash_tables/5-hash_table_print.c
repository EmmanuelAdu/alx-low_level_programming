#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash table
 * @ht: pointer to elements in the table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *slot;
	int still_on = 0;
	unsigned long int i = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		slot = ht->array[i];
		while (slot)
		{
			if (still_on)
			{
				printf(", ");
			}
			printf("'%s': '%s'", slot->key, slot->value);
			still_on = 1;
			slot = slot->next;
		}
	}
	printf("}\n");
}
