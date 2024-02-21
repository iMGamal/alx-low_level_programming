#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description - function that converts a binary number to an unsigned int
 * @b: character string
 * Return: y
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	unsigned int y = 0;

	if (b == NULL || *b == 0)
	{
		return (0);
	}
	while (b[x] == '0' || b[y] == '1')
	{
		y <<= 1;
		y += b[x] - '1';
		x++;
	}
	return (y);
}
