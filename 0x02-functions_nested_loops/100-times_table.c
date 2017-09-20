#include "holberton.h"

/**
 *print_times_table - prints out the times table for the number
 *
 *Description: uses the input value to set a times table
 *@n: the input value from the main file
 *Return: returns the  multiplication table value
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				if (b != 0)
				{
					_putchar(' ');
					if ((c / 10 + 48) != '0')
						_putchar(c / 10 + 48);
					else
						_putchar(' ');
				}
				_putchar(c % 10 + 48);
				if (a <= n && b < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
