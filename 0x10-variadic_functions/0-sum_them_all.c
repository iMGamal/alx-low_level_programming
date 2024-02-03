#include <stdio.h>
#include <stdarg.h>

/**
 * main - sum_them_all
 * @n - number of variables
 * Return - int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int total; unsigned int i;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		if (n != 0)
		{
		total += va_arg(ap, int);
		i++;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
