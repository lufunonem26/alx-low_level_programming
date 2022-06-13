#include "main.h"

/**
 * print_rev - Fucntion prototype
 * Description: Prints a string backwords
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
