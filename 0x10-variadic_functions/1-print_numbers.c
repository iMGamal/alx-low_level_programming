#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator - first variables
 * @n - number of variables passed into function
 * Return - 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i; int numbers; 

	va_start(ap, n);
	i = 0;
	numbers = 0;
	while (i < *separator)
	{
		numbers += va_arg(ap, int);
		i++;
	}
}
