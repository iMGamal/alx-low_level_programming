#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concentrate 2 strings
 * @s1 : first string
 * @s2 : second string
 * @n : parameter
 * Return : If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;

	unsigned int a, b;

	a = 1, b = 2;

	if (s1 == NULL)
	{
		a = 0;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else if (b > n)
	{
		x = malloc(sizeof(char) * (a + b + 1));
	}
	return (x);
}
