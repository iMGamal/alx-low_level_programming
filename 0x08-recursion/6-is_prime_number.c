#include <stdio.h>

/**
 * is_prime_number - Entry point
 * Description - function that returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer
 * Return: x
 */
int is_prime_number(int n)
{
	int x = is_prime_number(n - 1);

	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (x);
}
