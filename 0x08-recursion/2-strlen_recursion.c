#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of string
 * @char * : data type
 * @s : character string
 * Return : strlen
 */
int _strlen_recursion(char *s)
{
	int strlen = *s;

	if (*s == '\0')
	{
		printf("%d", strlen);
	}
	else
	{
		putchar(*s);
		_strlen_recursion(s + 1);
	}
	return (strlen);
}
