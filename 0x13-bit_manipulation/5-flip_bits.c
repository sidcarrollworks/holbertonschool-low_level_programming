#include "holberton.h"

/**
 * flip_bits - count the number of bits needed to flip
 * @n: number 1
 * @m: number 2
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = n ^ m;
	int count = 0;

	while (c != 0)
	{
		c = c & (c - 1);
		count++;
	}
	return (count);
}
