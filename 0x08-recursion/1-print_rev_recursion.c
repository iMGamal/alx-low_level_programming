#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - printing in reverse
 * @s : string
 */
void _print_rev_recursion(char *s)
{
		_print_rev_recursion(s + 1);
		printf("*s");
}
