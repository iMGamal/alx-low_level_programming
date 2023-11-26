#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns square root of a nimber
 * @n : parameter
 * @return : int
 */
int _sqrt_recursion(int n)
{
	int i = n;

	int x = ((i + (n / i)) / 2);

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (x);
}
