#include"function_pointers.h"

/**
 *int_index - indext of integer
 *@array: array of functions
 *@size: size of array
 *@cmp: pointer to function
 *
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if(array && size && cmp)
		while(i < size)
		{
			if(cmp(array[i]))
				return (i);
			i++;
		}
	return(-1);
}
