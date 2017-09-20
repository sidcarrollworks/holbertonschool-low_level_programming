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
					if (c >= 100)
					{
						_putchar(c / 100 + 48);
						_putchar((c - 100) / 10 + 48);
					}
					else if ((c / 10 + 48) != '0')
						_putchar(c / 10 + 48);
				}
				_putchar(c % 10 + 48);
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				
					if (a * (b + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (a * (b + 1) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
