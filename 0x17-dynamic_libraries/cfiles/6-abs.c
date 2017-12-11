#include "holberton.h"

/**
 * _abs - takes the absolute value of an input
 *
 * Description: determines if a number is negative of positve and abs
 * @c: the input number from test file
 * Return: The absolute value of the number
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	else if (c > 0)
		return (c);
	else
		return (c);
}
