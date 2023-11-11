#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - printing in reverse
 * @char - data type
 * @*s - variable
 */
void _print_rev_recursion(char *s);
{
	if (*s > 0);
	{
		return (0);
	}
	printf("%c", *s + print(*s - 1));
	*s --;
	return (*s);
}
