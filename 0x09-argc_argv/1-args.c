#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 *
 * @argc: arguement count
 * @argv: not used
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
