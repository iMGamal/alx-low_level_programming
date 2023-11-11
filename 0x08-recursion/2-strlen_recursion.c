#include"main.h"

/**
 * _strlen_recursion - length of a string
 * @s : string
 * Return : Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int *s = 0;
	if (*s)
	{
		_strlen_recursion(s + 1);
	}
}
