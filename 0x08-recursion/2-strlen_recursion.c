#include <stdio.h>

/**
 * _strlen_recursion - Entry points
 * Description - function that returns length of string
 * @s : character string
 * Return : Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
