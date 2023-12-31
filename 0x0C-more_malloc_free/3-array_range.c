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
	int n;

	int x;

	int *ptr;

	if (min > max)
	{
		return NULL;
	}
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (ptr == 0)
	{
		return NULL;
	}
	x = min;
	ptr[x] = min ++;
	return (ptr);
}
