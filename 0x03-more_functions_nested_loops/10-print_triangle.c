#include "holberton.h"

/**
 *
 *
 */
void print_triangle(int size)
{
	int a, b, c;
	
	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b < a ; b++)
				_putchar(' ');

			for (c = 0 ; c < a ; c++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

