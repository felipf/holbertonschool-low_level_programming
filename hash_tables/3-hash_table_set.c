#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: key
 * @value: the value assoc. with the key
 *
 * Return: 1 for Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || strlen(key) == '\0')
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	while (node != NULL)
	{
 		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node ->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
