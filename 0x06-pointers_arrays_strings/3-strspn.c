#include "holberton.h"

/**
 * _strspn - gets the length of prefix substring
 *
 * Description: calculates the name in bytes of the of matching
 * @s: pointer to main string
 * @accept: pointer to substring
 * Return: the number of matching char in bytes
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
