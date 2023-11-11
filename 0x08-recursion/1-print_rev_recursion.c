#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - printing in reverse
 * @s - variable
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("*s");
	}
	else
	{
		_print_rev_recursion(s +1);
		printf("*s");
	}
}
