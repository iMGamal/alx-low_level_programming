#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s - pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0');
	{
	puts("*s");
	_puts_recursion(s +1);
	}
	if (*s == '\0');
	{
		puts("\n");
	}
}
