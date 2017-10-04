#include "holberton.h"

/**
 * _strlen_recursion - prints length of string
 *
 * @s: input string from 
 * Return: retuns an int for length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
