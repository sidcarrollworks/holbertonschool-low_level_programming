#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	argc += 1;
	for (i = 0 ; i < argc ; i++)
	{
		if (argc > 0)
		{
			if (isdigit(argv[i]))
			{
				sum = atoi(argv[i]) + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}
