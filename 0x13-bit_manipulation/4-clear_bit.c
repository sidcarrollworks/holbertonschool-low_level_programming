#include "holberton.h"

/**
 * clear_bit - sets bit to 0
 * @n: number we want to change
 * @index: bit to change
 * Return: 1 if success -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
}
