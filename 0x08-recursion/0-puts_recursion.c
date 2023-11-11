#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - prints a string
 * @char * - data type
 * @s - pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts("*s");
	}
	else
	{
		puts("*s");
		_puts_recursion(s + 1);
	}
}
