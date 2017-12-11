#include <stdio.h>

/**
 * main - prints alphabet backwards
 * Return: zyxwvutsrqponmlkjihgfedcba
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
		putchar('\n');

	return (0);
}
