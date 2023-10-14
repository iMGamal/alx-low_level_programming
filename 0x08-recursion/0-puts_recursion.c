#include <main.h>
#include <stdio.h>
/**
 * puts_recursion - print a string followed by a new line.
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		puts('\n');
	}
	else
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
	return 0;
}
