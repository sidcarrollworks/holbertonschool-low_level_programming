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
	if (c > 0)
	{
		c = c % 10;
		_putchar('0' + c);
		return (c);
	}
	else if (c < 0)
	{
		c = (c * -1) % 10;
		_putchar('0' + c);
		return (c);
	}
	else
		_putchar('0' + c);
		return (c);
}
