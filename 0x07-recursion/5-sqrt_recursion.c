#include "holberton.h"

int helper(int x, int n);
/**
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	return helper(1, n);
}

int helper(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return helper(x + 1, n);
}
