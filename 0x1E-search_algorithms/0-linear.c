#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches through an array
 * @array: Pointer to first element of array
 * @size: Size of array
 * @value: Integer to be checked in array
 * Return: Always 0 (Success)
 */
int linear_search(int *array, size_t size, int value)
{
	int x;

	if (!value || array == NULL)
	{
		return (-1);
	}
	for (x = 0; (size_t)x < size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			printf("Found %d at index: %d\n", value, x);
			break;
		}
	}
	return (0);
}
