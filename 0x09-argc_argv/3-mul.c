#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 *
 * @argc: count
 * @argv: string array
 * Return: 0 if multiplies and 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc >= 2)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
