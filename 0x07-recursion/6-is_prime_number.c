#include "holberton.h"

int helper(int x, int n);
/**
 * is_prime_number - checks to see if number is prime
 * @n: number to be tested
 * Return: 1 if prime and 0 if non prime
 */
int is_prime_number(int n)
{
	return (helper(n, n / 2));
}

/**
 * helper - finds prime number
 * @x: half the number
 * @n: starting number
 * Return: returns 1 if a prime and 0 otherwise
 */
int helper(int n, int x)
{
	if (x < 1)
		return (0);
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	else
		return (helper(n, x - 1));
}
