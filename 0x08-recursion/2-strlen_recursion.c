#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of string
 * @char * : data type
 * @s : character string
 * Return : 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("%s", s);
	}
	else
	{
		putchar(*s);
		putchar('\n');
		_strlen_recursion(s + 1);
	}
	return (0);
}
