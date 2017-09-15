#include <stdio.h>

/**
 * main - prints out numbers
 * Description: Prints a numbers 0 through 9 only
 * Return: two digit numbers not repeating duplicate combinations
 */
int main(void)
{
	int c;
	int d;

	for (c = '0' ; c <= '9' ; c++)
	{

		for (d = '0' ; d <= '9' ; d++)
		{
			if (c != d && d > c)
			{
				putchar(c);
				putchar(d);
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
