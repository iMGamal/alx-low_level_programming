#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator - first variables
 * @n - number of variables passed into function
 * Return - i
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i; 

	va_start(ap, *separator);
	i = NULL; 
	while (i < separator)
	{
		i += va_arg(ap, int);
		i++;
	}
	return (i);
}
