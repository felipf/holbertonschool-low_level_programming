#include "main.h"
/**
 * print_chessboard - prints a chessboard.
 * @a: number of columns.
 */
void print_chessboard(char (*a)[8])
{
	int rows, col;

	for (rows = 0; rows < 8; rows++)
	{
		for (col = 0; col < 8; col++)
		{
			if (col == 7)
			{
				putchar(a[rows][col]);
				putchar(10);
			}
			else
				putchar(a[rows][col]);
		}
	}
}
