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

	argc += 1;
	if (argc == 0)
	{
		for (i = 0 ; i < argc ; i++)
		{
			if (isdigit(argv[i]))
			{
				for (j = 0 ; j < argc ; j++)
				{
					sum += atoi(argv[i]);
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("\n");
	return (0);
}
