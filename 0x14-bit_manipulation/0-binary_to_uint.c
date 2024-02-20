#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description - function that converts a binary number to an unsigned int
 * @b: character string
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int uint = *b;

	int decimal = 0;

	int base = 1;

	while (uint)
	{
		if (uint == 0)
		{
			return (0);
		}
		else
		{
			int last = uint % 10;

			uint = uint / 10;
			decimal += last * base;
		}
		return (decimal);
	}
	return (decimal);
}
