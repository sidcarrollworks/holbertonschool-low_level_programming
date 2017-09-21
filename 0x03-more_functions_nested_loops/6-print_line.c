#include "holberton.h"

/**
 * print_line - prints one underscore for number in input
 *
 * Description: prints the same number of underscores as the input
 * @n: the number of underscores
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
