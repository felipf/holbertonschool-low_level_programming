#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: array size
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *newHashT = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (newHashT == NULL)
		return (NULL);

	newHashT->array = malloc(size * sizeof(hash_node_t *));
	if (newHashT->array == NULL)
	{
		free(newHashT);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newHashT->array[i] = NULL;

	newHashT->size = size;

	return (newHashT);
}
