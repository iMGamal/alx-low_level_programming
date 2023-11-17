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
		n++;
		_strlen_recursion(s + 1);
	}
		return (n);
}
