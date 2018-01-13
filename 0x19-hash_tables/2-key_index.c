#include "hash_tables.h"

/**
 * key_index - get the index of the key
 * @key: key
 * @size: size of hash table
 * Return: return index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);
	hash_index = hash_index % size;

	return (hash_index);
}
