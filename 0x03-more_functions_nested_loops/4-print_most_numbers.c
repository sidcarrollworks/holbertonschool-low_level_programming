#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */
void print_most_numbers(void)
{
	for (c = '0' ; c <= '9' ; c++)
	{
		if (c == '2' || c == '4')
			return (0);
		else
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
