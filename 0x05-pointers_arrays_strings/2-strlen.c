#include "main.h"

/**
 * _strlen - Fucntion prototype
 * Description: Computes the length of a string
 * @s: The string to check the length of
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
