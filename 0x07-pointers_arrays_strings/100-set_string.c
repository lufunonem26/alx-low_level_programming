#include "main.h"

/**
 * set_string - Function prototype
 * Description: Sets the value of the pointer to a pointer to a char
 * to the value of the pointer to a char
 * @s: This is a pointer to a pointer to a char.
 * @to: The string to copy to the pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
