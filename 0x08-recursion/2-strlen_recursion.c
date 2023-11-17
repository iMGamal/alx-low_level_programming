#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints legnth of string
 * @char * : data type
 * @s : string
 * Return : legnth of string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 1;
	s = 0;

	if (*s == '\0')
	{
		printf("%d\n", n);
		return (n);
	}
		return (n);
}
