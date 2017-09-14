#include <stdio.h>

/**
 * main - prints all base16 numbers
 * Return: 0123456789abcdef
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= 'f' ; c++)
		if (c <= '9' || c >= 'a') 
			putchar(c);
			putchar('\n');

		return (0);
}
