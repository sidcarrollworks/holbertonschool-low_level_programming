#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gets a random number and checks if its positive or negative
 * Return: Outputs the number and whether its positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
