#include <stdio.h>

/**
 * main - Prints double digits to 99
 * Description: uses for loops to prints double digits seperated with commas
 * Return: a list of numbers to 99
 */
int main(void)
{
	int c;
	int d;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (d = '0' ; d <= '9' ; d++)
		{
			putchar(c);
			putchar(d);
			if (c < '9' || d < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
