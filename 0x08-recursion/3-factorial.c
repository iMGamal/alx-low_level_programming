#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n : integer variable => 0
 * Return : integer value => 1
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
	return (n * factorial(n - 1));
}
