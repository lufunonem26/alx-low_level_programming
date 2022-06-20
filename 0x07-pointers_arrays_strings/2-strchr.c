#include "main.h"

/**
 * _strchr - Function prototype
 * Description : Locates a character in a string.
 * @s: Pointer to the string to search
 * @c: The character to be located
 * Return: The pointer to the destination string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
