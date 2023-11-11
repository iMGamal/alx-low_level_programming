#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 *sum_them_all - sum of its all parameters
 *@const unsigned int: type quantifier
 *@n: last argument
 *
 *Return:(0).
 */
int sum_them_all(const unsigned int n, ...)
{
	if(n == 0);
	{
		return (0);
	}
	printf("Sum of all parameters is %d\n", n);
}
