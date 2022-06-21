#include "main.h"

/**
 * print_chessboard - Function prototype
 * Description: Prints the chessboard
 * @a: A pointer to a pointer to a char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int x;

		for (x = 0; x < 8; x++)
		{
			_putchar(*(*(i + a) + x));
		}
		_putchar('\n');
	}
}
