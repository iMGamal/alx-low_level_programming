#include"main.h"

/**
 * _strlen_recursion - returns length of string
 * @s : string
 * Return : n
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
