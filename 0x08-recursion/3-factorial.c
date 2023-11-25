#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n - integer number whose factorial value to be returned
 * Return : factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((n = 0) || (n > 0))
	{
		return (factorial(n));
	}
	return (factorial(n));
}
