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

	for (a = 0 ; a <= n ; a++)
	{
		if (n > 0)
			_putchar('_');
	}
		_putchar('\n');
}
