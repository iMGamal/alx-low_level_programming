#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns square root of a nimber
 * @n : parameter
 * @return : int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n / 2));
}
