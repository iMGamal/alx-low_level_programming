#include <stdio.h>
#include "main.h"

/**
 * _memset - function that returns character
 * @s : parameter
 * @b : parameter
 * @n : parameter
 * Return : 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		printf("%d", n);
		return (0);
	}
	else if (b > 0)
	{
		printf("%c", b);
		return (0);
	}
	else
	{
		printf("%s", s);
		return (0);
	}
	return (0);
}
