#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * Description: uses two loops to make a diagonal line
 * @n: input number from file
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
