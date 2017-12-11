#include "holberton.h"

/**
 * print_square - prints out # in a box
 *
 * Description: uses loops to print out a box
 * @size: size of the box with input
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
