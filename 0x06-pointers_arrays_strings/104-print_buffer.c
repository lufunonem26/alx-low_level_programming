#include <stdio.h>

/**
 * print_buffer - Function prototype
 * Description: Prints a buffer in hexadecimal and ASCII format
 * @b: Pointer to the buffer
 * @size: The size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int x;
	int y;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);

		for (x = i; x < i + 10; x++)
		{
			if (x % 2 == 0)
				printf(" ");
			if (x < size)
				printf("%.2x", *(b + x));
			else
				printf("  ");
		}

		printf(" ");

		for (y = i; y < i + 10; y++)
		{
			if (y >= size)
				break;

			if (*(b + y) < 32 || *(b + y) > 126)
				printf("%c", '.');
			else
				printf("%c", *(b + y));
		}
		printf("\n");
	}
}
