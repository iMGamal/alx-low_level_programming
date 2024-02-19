#include <stdio.h>

/**
 * binary_to_uint - Entry point
 * Description - function that converts a binary number to an unsigned int
 * @b: character string
 * Return: NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	unsigned int y = 1;

	if (*b != 0 && *b != 1)
	{
		return (0);
	}
	else if (b == y)
	{
		return (y);
	}
	else if (b == x)
	{
		return (x);
	}
	return (y);
}
