#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory.
 */
void * _calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
	{
		return (NULL);
	}
	memset(a, 0, sizeof(int) * nmemb);

	return (a);
}
