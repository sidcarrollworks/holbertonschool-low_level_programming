#include "holberton.h"

int _strlen_recursion(char *s);
int helper(int x, int y, char *s, int length);
/**
 * is_palindrome - checks if palindrome
 * @s: input string
 * Return: im tired
 */
int is_palindrome(char *s)
{
	int x, y, length;

	x = 0;
	length = _strlen_recursion(s) - 1;
	y = _strlen_recursion(s) - 1;

	return (helper(x, y, s, length));
}
/**
 * helper - helper function
 * @x: string start
 * @y: string end
 * @s: string
 * @length: length of string
 * Return: whether or not palindrome
 */
int helper(int x, int y, char *s, int length)
{
	if (s[x] == s[y])
	{
		if (x == length / 2)
			return (1);
		return (helper(x + 1, y - 1, s, length));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - prints length of string
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
