#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Description: takes a number, gets the last digit, makes it positive
 * @c: the input value
 * Return: returns the positive value of c
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar('0' + last);
	return (last);
}
