#include "main.h"

/**
 * infinite_add - Function prototype
 * Description: Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer r
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, i, x = 0, y = 0, t = 0;

	for (i = 0; *(n1 + i); i++)
		x++;

	for (i = 0; *(n2 + i); i++)
		y++;

	if (size_r <= x + 1 || size_r <= y + 1)
		return (0);

	n1 += x - 1, n2 += y - 1;

	*(r + size_r) = '\0';

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		a = (*n1 - '0') + (*n2 - '0');
		a += t;
		*(r + size_r) = (a % 10) + '0';
		t = a / 10;
	}

	for (; *n1; n1--, size_r--)
	{
		a = (*n1 - '0') + t;
		*(r + size_r) = (a % 10) + '0';
		t = a / 10;
	}

	for (; *n2; n2--, size_r--)
	{
		a = (*n2 - '0') + t;
		*(r + size_r) = (a % 10) + '0';
		t = a / 10;
	}

	if (t && size_r >= 0)
	{
		*(r + size_r) = (t % 10) + '0';
		return (r + size_r);
	}

	if (t && size_r < 0)
		return (0);

	return (r + size_r + 1);
}
