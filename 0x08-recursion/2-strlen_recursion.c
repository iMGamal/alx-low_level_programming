#include <stdio.h>

/**
 * _strlen_recursion - Entry points
 * Description - function that returns length of string
 * @s : character string
 * Return : int
 */
int _strlen_recursion(char *s)
{
	int x;

	x = _strlen_recursion(s + 1);
	return (x);
}
