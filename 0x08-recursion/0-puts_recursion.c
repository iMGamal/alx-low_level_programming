#include<stdio.h>

/**
 * _puts_recursion - Entry Point
 * Description - function that prints a string followed by a new line
 * @s : character string
 * Return : Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
		return;
	}
}
