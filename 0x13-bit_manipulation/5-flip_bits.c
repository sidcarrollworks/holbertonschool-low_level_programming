#include "holberton.h"

/**
 * flip_bits - count the number of bits needed to flip
 * @n: number 1
 * @m: number 2
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = n ^ m;
	unsigned int count = 0;

	while (c)
	{
		count += (c & 1);
		c >>= 1;
	}
	return (count);
}
