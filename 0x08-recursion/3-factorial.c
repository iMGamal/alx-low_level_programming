#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n : parameter
 * Return : n * factorial(n - 1)
 */
int factorial(int n)
{
	int given number = factorial(n);
	
	if (n < 0)
	{
		return (-1);
	}
	else if ( n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));	
}
