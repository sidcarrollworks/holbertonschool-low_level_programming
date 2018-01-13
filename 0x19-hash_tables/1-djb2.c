#include "hash_tables.h"

/**
 * hash_djb2 - hashing function
 * str: string to hash
 * Return: return hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
