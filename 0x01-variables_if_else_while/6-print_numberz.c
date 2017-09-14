#include <stdio.h>

/**
 * main - prints base 10 digits
 * Return: prints single character base 10 digits starting with 0
 */
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
		putchar('\n');

	return (0);
}
