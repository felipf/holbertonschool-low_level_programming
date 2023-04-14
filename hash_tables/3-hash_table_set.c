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
	hash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* compute the index of the key in the hash table */
	index = key_index((const unsigned char *)key, ht->size);

	/* allocate memory for the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* copy the key and value into the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* handle collisions by adding the new node at the beginning of the list */
	temp_node = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = temp_node;

	return (1);
}
