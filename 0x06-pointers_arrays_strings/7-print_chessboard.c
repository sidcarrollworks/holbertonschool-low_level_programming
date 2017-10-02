#include "holberton.h"

/**
 * print_chessboard - prints out a chessboard
 *
 * Description: uses a 2 dimensional array to print a chessboard
 * @a: pointer to the array with chess pieces
 * Return: a printed chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
