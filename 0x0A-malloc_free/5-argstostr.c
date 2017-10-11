#include <stdlib.h>
#include "holberton.h"

int findlength(int ac, char **av);

/**
 * argstorstr - concatenates all the arguements of program
 * @ac: the number of arguements
 * @av: the strings
 * Return: returns the concatened strings
 */
char *argstostr(int ac, char **av)
{
	int i, j, x;
	int len;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = findlength(ac, av);
	s = malloc(len + 1);
	for (i = 0, x = 0 ; i < ac ; i++, x++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, x++)
			s[x] = av[i][j];
		s[x] = '\n';
	}
	s[x] = '\0';
	return (s);
}

/**
 * findlength - finds the space needed
 * @ac: number of arguements
 * @av: the strings
 * Return: the length in bytes needed for malloc
 */
int findlength(int ac, char **av)
{
	int a, b, c;

	for (a = 0 ; a < ac ; a++)
	{
		for (b = 0 ; av[a][b] != '\0' ; b++)
			c++;
	}
	return (c + ac);
}
