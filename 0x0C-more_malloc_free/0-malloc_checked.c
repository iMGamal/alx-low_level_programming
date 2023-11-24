#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mallo_checked - function returns nothing
 * @b : parameter whose soze to be checked
 * Return : void
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (b == 0)
	{
		exit(98);
	}
	else if (n == 0)
	{
		exit(98);
	}
	else
	{
		return (n);
	}
}
