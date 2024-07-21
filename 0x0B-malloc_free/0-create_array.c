#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array
 * @size : Size of array
 * @c : character
 * Return : First character of array
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
		array[0] = c;
	}
	return (array);
}
