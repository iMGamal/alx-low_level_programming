#include"main.h"

/**
 * is_prime_number - returns a prime number
 * @n : input
 * Return: prime number or 0
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (%n == 0)
	{
		return (0);
	}
	else
	{
		return (n * is_prime_number( n - 1));
	}
}
