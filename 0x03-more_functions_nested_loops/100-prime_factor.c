#include <stdio.h>

/**
 * main - Prints out the largest prime factor
 *
 * Description: finds all the prime factors and prints the largest one
 * Return: the largest prime factor
 */
int main(void)
{
	long int num = 612852475143;
	int i;

	for (i = 2; i <= num ; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (i);
}
