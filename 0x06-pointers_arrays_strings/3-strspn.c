#include "holberton.h"

/**
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (counter != i)
			break;
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				counter++;
		}
	}
	return (counter);
}
