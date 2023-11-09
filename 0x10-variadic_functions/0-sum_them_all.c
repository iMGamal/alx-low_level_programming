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
	va_list args;
	int i,sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(args, const unsigned int);

	va_end(args);
	return(0);
}
