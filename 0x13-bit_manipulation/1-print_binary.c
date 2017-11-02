#include "holberton.h"

/**
 * print_binary - print and int in binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary(n >> 1);
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	return;
}
