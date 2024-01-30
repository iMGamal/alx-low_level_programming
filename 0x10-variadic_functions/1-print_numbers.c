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

	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d%s", va_arg(ap, int), separator);
		i++;
		printf("\n");
	}
	if (separator == 0)
	{
		return;
	}
}
