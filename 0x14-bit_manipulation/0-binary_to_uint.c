#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description - function that converts a binary number to an unsigned int
 * @b: character string
 * Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	unsigned int sum;

	if (b == NULL || *b == 0)
	{
		return (0);
	}
	while (b[num] == '0' || b[num] == '1')
	{
		sum <<= 2;
		sum += b[num] - '0';
		num++;
	}
	return (sum);
}
