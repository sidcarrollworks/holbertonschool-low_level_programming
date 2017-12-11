#include <stdio.h>

/**
 * main - Prints lowercase then uppercase alphabets
 * Return: the alphabet twice
 */

int main(void)
{
	char c;
	char C;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);

	for (C = 'A' ; C <= 'Z' ; C++)
		putchar(C);

	putchar('\n');

	return (0);
}
