#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @char * : data type
 * @s : character string
 * Return : void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("%s", s);
	}
	else
	{
		printf("%s", s + 1);
	}
}
