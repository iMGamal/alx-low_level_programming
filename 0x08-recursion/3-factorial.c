#include <stdio.h>

/**
 * factorial - Entry point
 * Description - function that returns factorial of a given number
 * @n: integer
 * Return: n * (factorial( n - 1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
