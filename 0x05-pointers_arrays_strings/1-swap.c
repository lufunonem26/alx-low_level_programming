#include "main.h"

/**
 * swap_int - Fucntion prototype
 * Description: Swap the values of the integers pointed to by the pointers
 * @a: pointer to an int
 * @b: pointer to an int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
