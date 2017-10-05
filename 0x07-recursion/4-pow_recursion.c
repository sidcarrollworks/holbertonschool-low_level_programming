#include "holberton.h"

/**
 * _pow_recursion - returns the powers
 *
 * @x: the base number
 * @y: the exponent
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
