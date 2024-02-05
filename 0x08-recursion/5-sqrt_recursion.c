#include<stdio.h>

/**
 * _sqrt_recursion - Entry point
 * Description - function that returns natural square root of a given number
 * @n: integer
 * Return: n * _sqrt_recursion(n - 1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n = 0)
	{
		return (0);
	}
	return (n * _sqrt_recursion(n - 1));
}
