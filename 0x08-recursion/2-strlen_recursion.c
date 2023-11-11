#include"main.h"

/**
 * _strlen_recursion - length of a string
 * @s : string
 * Return : Always 0 (success)
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
