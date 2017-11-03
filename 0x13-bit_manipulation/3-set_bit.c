#include "holberton.h"

/**
 * set_bit - set a bit at index to one
 * @n: number we want to change
 * @index: bit we want to change
 * Return: 1 if success or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
