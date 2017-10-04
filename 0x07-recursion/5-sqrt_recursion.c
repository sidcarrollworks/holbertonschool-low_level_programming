#include "holberton.h"

int helper(int x, int n);
/**
 * _sqrt_recursion - prints a square root
 *
 * Description: finds the square root of a number
 * @n: number to get square root of
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}

/**
 * helper - does the actual calculations
 * @x: cycles through the numbers
 * @n: the number we want to square root
 * Return: the square root
 */
int helper(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (helper(x + 1, n));
}
