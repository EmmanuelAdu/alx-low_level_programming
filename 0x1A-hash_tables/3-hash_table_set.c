#include "hash_tables.h"

/**
 * hash_table_set - Function adds an element to hash table
 * @ht: pointer to the hash table
 * @key: the key to add
 * @value: the value that comes together with the key
 * Return: 1 on success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *slot, *new_node;
	unsigned long int idx = 0; /* idx - find the index */
	char *key_cp; /* value_cp - valuecopy, key_cp - keycopy */
	char *value_cp;

	if (!key || !ht || !value || !*key)
		return (0);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	key_cp = strdup(key);
	if (key_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	slot = ht->array[idx];

	while (slot) /* Updating value for the key starts from here */
	{
		if (!strcmp(key, slot->key))
		{
			free(slot->value);
			slot->value = value_cp;
			return (1);
		}
		slot = slot->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_cp);
		return (0);
	}
	new_node->key = key_cp;
	new_node->value = value_cp;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
