#include"main.h"

/**
 * factorial - returns the factorial of a given number
 * @n : input
 * Return : factorial of n
 */
int factorial(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		i++;
		factorial(n + 1);
	}
	return (factorial(n + 1));
}
