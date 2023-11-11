#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - prints a string
 * @char - data type
 * @*s - variable to be printed
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		putchar("*s\n");
	}
	else
	{
		putchar(*s);
		_puts_recursion(s+1);
	}
}
