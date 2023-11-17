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
	int n = 0;

	if (*s)
	{
		printf("%d\n", _strlen_recursion(s + 1));
		return (0);
	}
	else if (s != 0)
	{
		printf("%d\n", n);
		return (0);
	}
	else
	{
		puts(s);
		return (0);
	}
		return (n);
}
