#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function
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
	return (n * (_sqrt_recursion(n - 1)));
}
