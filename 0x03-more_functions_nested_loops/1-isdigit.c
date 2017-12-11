#include "holberton.h"

/**
 * _isdigit - checks if input is a digit
 *
 * Description: takes input and checks it with ascii table
 * @c: input from file
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
