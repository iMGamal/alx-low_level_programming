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
		if ((i + 1) ==  n)
		{
			printf("%d\n", va_arg(ap, int));
		}
		if (separator == NULL)
		{
			printf("");
		}
		else
		{
		printf("%d%s", va_arg(ap, int), separator);
		}
		i++;
	}
}
