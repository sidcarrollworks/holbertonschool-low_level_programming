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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, n % 10);
	/*prints the start of the line and the numbers*/

	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0\n");
	else if (n != 0 && n < 6)
		printf("and is less that 6 and not 0\n");

	return (0);
}
