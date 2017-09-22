#include "holberton.h"

/**
 *
 *
 */
void print_triangle(int size)
{
	int row, space, pound;
	
	if (size > 0)
	{
		for (row = 0 ; row <= size ; row++)
		{
			for (space = size - row ; space > 0 ; space--)
				_putchar(' ');
			
			for (pound = 0 ; pound < row ; pound++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

