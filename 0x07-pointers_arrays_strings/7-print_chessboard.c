#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, o;

	for (i = 0; i < 8; i++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[i][o]);
		}
		_putchar('\n');
	}
}
