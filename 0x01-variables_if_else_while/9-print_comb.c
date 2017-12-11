#include <stdio.h>

/**
 * main - prints out single digit numbers with commas
 * Description: counts 0 to 9 then puts commas and spaces between
 * Return: 0-9 with commas and spaces inbetween
 */

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
