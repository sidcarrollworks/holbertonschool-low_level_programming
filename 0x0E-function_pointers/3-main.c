#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - gets the inputs from the user and calulates it
 * @argc: number of arguements
 * @argv: arguements listed in a string
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' && num2 == 0) || (argv[2][0] == '%' && num2 == 0))
		printf("Error\n"), exit(100);

	calc = (get_op_func(argv[2]));

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(num1, num2));
	return (0);
}
