#include<stdio.h>
#include<main.h>

/**
 * _puts_recursion - print a string
 * s - variable to be initialized
 * Return: Always (0).
 */

void _puts_recursion(char *s);

{
	if (*s)
	{
		_puts(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_puts(\n);
	}
	return (0);
}
