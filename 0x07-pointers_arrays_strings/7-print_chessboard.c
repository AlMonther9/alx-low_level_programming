#include "main.h"

/**
 * _print_chessboard - a function that prints the chessboard
 * @a: rows
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putcahr(a[i][x]);
		}
		_putchar('\n');
	}
}
