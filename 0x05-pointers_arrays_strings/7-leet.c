#include "holberton.h"

/**
 *
 *
 *
 *
 */
char *leet(char *arr)
{
	int i;
	int s;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (arr[i] != '\0')
	{
		s = 0;

		while (l[s] != '\0')
		{
			if (l[s] == arr[i])
				arr[i] = n[s];
		s++;
		}
		i++;
	}
	return (arr);
}

	
