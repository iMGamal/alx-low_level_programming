#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function
 * @x - int
 * @y - int
 * Return : value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y + 1)));
}
