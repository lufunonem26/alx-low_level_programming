#include "main.h"

/**
 * _strspn - Function prototype
 * Description : Locates the first occurrence in the string s of any of the bytes
 * in the string accept
 * @s: Pointer to the string to search
 * @accept: Pointer to the string that contains the characters to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
