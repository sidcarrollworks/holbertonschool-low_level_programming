#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	int sum = 0;

	if (argc > 1)
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
