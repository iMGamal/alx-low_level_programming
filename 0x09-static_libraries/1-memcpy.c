#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that returns character
 * @dest : parameter
 * @src : parameter
 * @n : parameter
 * Return : n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest > 0)
	{
		printf("%s", dest);
	}
	else if (src > 0)
	{
		printf("%s", src);
	}
	else if (n > 0)
	{
		printf("%d", n);
	}
	else
	{
		return (NULL);
	}
	return (dest);
}
