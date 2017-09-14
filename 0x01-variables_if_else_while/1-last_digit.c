#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - creates random number and displays that number with text
 * Return: Test, number, text
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;
	printf("Last digit of %d is %d ", n, d);
	/*prints the start of the line and the numbers*/

	if (d > 5)
		printf("and is greater than 5\n");
	else if (d == 0)
		printf("and is 0\n");
	else if (d < 6 && d != 0)
		printf("and is less that 6 and not 0\n");

	return (0);
}
