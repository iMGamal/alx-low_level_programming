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

	int num = uint;

	while (num)
	{
		if (num == 0)
		{
			return (0);
		}
		else
		{
			int last = uint % 10;

			num = num / 10;
			decimal += last * base;
			base = base * 2;
		}
	}
	return (decimal);
}
