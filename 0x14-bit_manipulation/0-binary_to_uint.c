#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description - function that converts a binary number to an unsigned int
 * @b: character string
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b || b == NULL)
	{
		return (0);
	}
	else
	{
		num += (num * 2) + (*b++ - '0');
	}
	return (num);
}
