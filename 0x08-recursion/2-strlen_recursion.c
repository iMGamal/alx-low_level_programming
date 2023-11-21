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
	}
	else
	{
		putchar(*s);
		_strlen_recursion(s + 1);
	}
}
