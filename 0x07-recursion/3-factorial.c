#include "holberton.h"

/**
 * factorial - find the factorial
 * @n: the number we want to find the factorial
 * Return: return the answer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
