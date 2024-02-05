#include<stdio.h>

/**
 * _sqrt_recursion - Entry point
 * Description - function that returns natural square root of a given number
 * @n: integer
 * Return: _sqrt_recursion(n - 1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n - 1));
}
