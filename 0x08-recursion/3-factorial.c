#include <stdio.h>

/**
 * factorial - Entry point
 * Description - function that returns factorial of a given number
 * @n: integer
 * Return: int
 */
int factorial(int n)
{
	int x = 0;

	if(n)
	{
		x += factorial(n + 1);
		x++;
	}
	return(x);
}
