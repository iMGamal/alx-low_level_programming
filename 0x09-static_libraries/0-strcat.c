#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that returns string
 * @dest : parameter
 * @sc : parameter
 * Return : NULL
 */
char *_strcat(char *dest, char *src)
{
	if (dest > 0)
	{
		printf("%s", dest);
		return (0);
	}
	else if (src > 0)
	{
		printf("%s", src);
		return (0);
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
