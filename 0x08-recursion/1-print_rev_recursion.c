#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @char * : data input
 * @s : character string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (s == 0)
	{
		puts(s + 1);
		return;
	}
	else if (s != 0)
	{
		puts(s);
		return;
	}
	else
	{
		puts(s);
		return;
	}
		return;
}
