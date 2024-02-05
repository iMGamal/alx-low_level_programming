#include <stdio.h>

/**
 * _strlen_recursion - Entry points
 * Description - function that returns length of string
 * @s : character string
 * Return : *s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (*s);
}
