#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * Description: the 'Program' prints numbers followed by a new line
 * @separator: first argument
 * @n: second argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d%s", va_arg(ap, separator));
		if (i == n)
		{
			printf("\n");
		}
		i++;
	}
	return;
}
