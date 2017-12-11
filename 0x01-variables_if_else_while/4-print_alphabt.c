#include <stdio.h>

/**
 * main - prints alphabet without e or q
 * Return: Prints alphabet into cosnsole without e or q
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
			putchar('\n');

	return (0);
}
