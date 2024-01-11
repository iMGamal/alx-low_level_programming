#include <stdio.h>

/**
 * _print_rev_recursion - Entry point
 * Description : function that prints a string in reverse
 * @s : character string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s > 0)
	{
		putchar (*s + 1);
		return;
	}
}
