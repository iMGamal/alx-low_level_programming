#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n - variable
 * Return : positive number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n != 0)
	{
		return factorial(n);
	}
	putchar(factorial(n + 1));
	return n;
}
