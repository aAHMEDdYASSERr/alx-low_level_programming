#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: char
 * return: nothing
*/


void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 0; itr++)
	{
		for (jtr = 0; jtr < 0; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\n');
	}
}
