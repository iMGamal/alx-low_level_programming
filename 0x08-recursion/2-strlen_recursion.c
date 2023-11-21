#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of string
 * @char * : data type
 * @s : character string
 * Return : 0
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s == '\0')
	{
		printf("%d", strlen);
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
		putchar(*s);
		return (0);
	}
	return (0);
}
