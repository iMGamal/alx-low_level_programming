#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - printing in reverse
 * @char - data type
 * @*s - variable
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0');
	{
		_putchar(*s);
	}
	else
	{
		_print_rev_recursion (s +1);
		_putchar(*s)
	}
}
