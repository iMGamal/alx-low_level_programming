#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Function that uses binary search algorithm to find a certain value in a sorted array
 * @array: Sorted array which gonna be the search subject
 * @size: Size of the sorted array
 * @value: Integer value to be found
 * Return: Index where value is stored
 */
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	low = 0;
	high = size - 1;

	while (high >= low)
	{
		mid = low + (high - low) / 2;
		if (value > array[mid])
		{
			low = mid + 1;
			printf("%d\n", *array);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
			printf("%d\n", *array);
		}
		else if (value == array[mid])
		{
			return (mid);
		}
	}
	return (-1);
}
