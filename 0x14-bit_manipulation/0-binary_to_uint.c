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
	unsigned int num = 0;

	unsigned int sum;

	if (b == NULL)
	{
		return (0);
	}
	while (b[num] == '0' || b[num] == '1')
	{
		sum <<= 1;
		sum += b[num] - '0';
		num++;
	}
	return (sum);
}
