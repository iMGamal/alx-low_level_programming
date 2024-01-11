#include <stdio.h>

/**
 * _pow_recursion - Entry point
 * Description - Function that return the value of x to the power of y
 * @x: parameter
 * @y: parameter
 * Return: 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x > 0)
	{
		return (x * _pow_recursion(x, y-1));
	}
	return (0);
}
