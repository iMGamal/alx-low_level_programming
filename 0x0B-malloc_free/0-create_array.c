#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates array
 * @size : Size of array
 * @c : character
 * Return : array reference or NULL
 */
char *create_array(unsigned int size, char c)
{
	int x;

	char *array = malloc(sizeof(char) * size);

	if (size == 0 || !array)
	{
		return (NULL);
	}

	for (x = 0; (unsigned int)x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
