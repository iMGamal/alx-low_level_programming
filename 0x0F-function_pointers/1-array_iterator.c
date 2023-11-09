#include"function_pointers.h"

/**
 * array_iterator - iteration of array
 * @array: arranges parameters
 * @size: size of array
 * @action: pointer to function
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int *end = array + size - 1;

	if(array && size && action)
		while(array <= end)
			action(*array++);
}
