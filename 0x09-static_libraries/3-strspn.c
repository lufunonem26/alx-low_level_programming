#include "main.h"

/**
 * _strspn - Function prototype
 * Description : Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: The characters to match in the string s
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int val = 0;

	for (i = 0;; i++)
	{
		for (x = 0; accept[x] > '\0'; x++)
		{
			if (s[i] != accept[x])
				continue;
			val++;
			break;
		}
		if (accept[x] == '\0')
			break;
	}

	return (val);
}
