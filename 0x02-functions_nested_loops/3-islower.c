#include "holberton.h"

/**
 * _islower - checks for lowercase letter
 *
 * Description: 
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}

