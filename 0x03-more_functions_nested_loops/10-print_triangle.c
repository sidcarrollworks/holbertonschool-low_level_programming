#include "holberton.h"

/**
 * print_triangle - prints a triangle with octothorps
 *
 * Description: uses rows and loops to print out a triangle
 * @size: gets the size of the triangle from file
 * Return: void
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

