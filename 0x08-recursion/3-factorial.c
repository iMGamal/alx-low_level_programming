#include <stdio.h>
#include "main.h"

/**
 * factorial - function
 * @n : parameter
 * Return : Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
