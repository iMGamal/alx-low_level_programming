#include <stdio.h>

/**
 * factorial - Entry point
 * Description - function that returns factorial of a given number
 * @n: integer
 * Return - Always 0 (Success)
 */
int factorial(int n)
{
	if (n > 0)
	{
		putchar(n + 1);
		return (0);
	}
	return (n);
}
