#include "holberton.h"

/**
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1 << index;
	return (*n | mask);
}
