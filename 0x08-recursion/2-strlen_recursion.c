#include"main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s : string
 * Return : int
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++ _strlen_recursion(s + 1);
	}
	return (n);
}
