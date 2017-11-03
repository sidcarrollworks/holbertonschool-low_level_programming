#include "holberton.h"

/**
 * get_bit - returns the value of the bit at index
 * @n: number to check
 * @index: place we want to check
 * Return: 1 if 1, 0 if 0;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * 4)
		return ((n >> index) & 1);
	return (-1);
}
