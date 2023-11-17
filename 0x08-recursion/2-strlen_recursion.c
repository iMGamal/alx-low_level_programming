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
	int longit = 0;

	longit++

	if (*s == '\0')
	{
	_strlen_recursion(s + 1);
	}
	return (longit);
}
