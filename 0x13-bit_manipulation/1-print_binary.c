#include "holberton.h"
void helper(unsigned long int n);
/**
 * print_binary - print and int in binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		helper(n);
}

/**
 * helper - func that finds the numbers
 * @n: number to check
 */
void helper(unsigned long int n)
{
	if (n)
	{
		helper(n >> 1);
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
