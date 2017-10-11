#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);
/**
 * str_concat - concats two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;
	unsigned int len1, len2, total;
	char null = '\0';

	if (s1 == NULL)
		s1 = &null;
	if (s2 == NULL)
		s2 = &null;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;

	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
		s[i] = s1[i], i++;
	j = 0;
	while (i < total)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
/**
   * _strlen - prints the length of a string
 * Description: cycles through the array of s until its false
 * @s: input from file
 * Return: returns the length
 */
int _strlen(char *s)
{
	int counter = 0;
	/* initialize a counter for the length */

	while (s[counter]) /*uses s to create an array for the input*/
	{
		counter++; /*counts every element*/
	}
	return (counter); /*return end counter8*/
}
