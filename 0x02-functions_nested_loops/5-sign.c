#include "holberton.h"

/**
 * print_sign - checks the sign of the number
 *
 * Description: checks the sign of number and prints it out
 * @n: gets code of other file
 * Return: 1 if greater than 1, 0 if 0, -1 if below zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
