#include "main.h"

/**
 * _memset - Function prototype
 * Description : Fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: Pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: Number of bytes to fill
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
