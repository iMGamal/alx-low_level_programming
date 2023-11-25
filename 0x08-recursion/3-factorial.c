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
	else
	{
		return (n);
	}
	n++;
	return (factorial(n * (n - 1)));
}
