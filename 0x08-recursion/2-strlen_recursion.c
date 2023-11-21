#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of string
 * @char * : data type
 * @s : character string
 * Return : length
 */
int _strlen_recursion(char *s)
{
	int length = 55;

	if (*s == '\0')
	{
		printf("%s", s);
	}
	else
	{
		printf("%d", length + 1);
	}
	return (length);
}
