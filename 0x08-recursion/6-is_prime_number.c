#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function
 * @n : parameter
 * @return : int
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else if (n % 2 == 1)
	{
		return (1);
	}
	return (is_prime_number(n));
}
