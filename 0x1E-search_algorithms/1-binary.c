#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Function that uses binary search to find a certain value
 * @array: Sorted array which gonna be the search subject
 * @size: Size of the sorted array
 * @value: Integer value to be found
 * Return: Always -1 (Failure)
 */
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high, i;

	low = 0;
	high = size - 1;

	if (!value || array == NULL)
	{
		return (-1);
	}

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else if (value == array[mid])
		{
			return (mid);
		}
	}
	return (-1);
}
