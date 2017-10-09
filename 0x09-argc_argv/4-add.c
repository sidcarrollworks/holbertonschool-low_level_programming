#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two numbers
 *
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0 if no number is passed, 1 if not a number
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
