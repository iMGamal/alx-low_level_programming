#include <stdio.h>

/**
 * factorial - Entry point
 * Description - function that returns factorial of a given number
 * @n: integer
 * Return: x
 */
int factorial(int n)
{
	int x = (n * factorial(n - 1));

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (x);
}
