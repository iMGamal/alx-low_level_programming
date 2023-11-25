#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min : minimum value in array
 * @max : maximum value in array
 * Return : pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int n[] = {1, 3};

	int *a = malloc(sizeof(int *) * min * max);

	min = 1;
	max = 3;
	if (min > max)
	{
		return NULL;
	}
	if (n == 0)
	{
		return NULL;
	}
	return (a);
}
