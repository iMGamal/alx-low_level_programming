#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : input
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (1);
	}
	else
	{
		return (n * _sqrt_recursion(n -1));
	}

}
