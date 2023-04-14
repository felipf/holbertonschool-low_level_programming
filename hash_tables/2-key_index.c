#include "hash_tables.h"
/**
 * key_index - func gives index of key
 * @key: to find index
 * @size: size of array of hash
 * Return: index which value will be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
