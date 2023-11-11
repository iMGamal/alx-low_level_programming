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
		printf("\n");
	}
	else
	{
		printf("*s");
		_puts_recursion(s + 1);
	}
}
