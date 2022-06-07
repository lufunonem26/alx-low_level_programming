#include "main.h"

/**
 * print_alphabet - Function prototype
 * Description: Prints the letters of the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
