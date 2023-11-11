#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - function like puts();
 * @s: input
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts("\n");
	}
	else
	{
		puts("*s");
		_puts_recursion(s + 1);
	}
}
