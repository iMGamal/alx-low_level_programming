#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Function that prints an integer and checks its sign
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else
	{
		printf("%d is negative\n", n);
		return (0);
	}
	return (0);
}
