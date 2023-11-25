#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array
 * @unsigned int : data type
 * @size : size of array
 * @char : data type
 * @c : character
 * Return : character
 */
char *create_array(unsigned int size, char c)
{
	int n = size;

	char *x[n];

	int* ptr = (int*)malloc(n * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		printf("%n", ptr);
	}
	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
		return (NULL);
	}
	return (NULL);

}
