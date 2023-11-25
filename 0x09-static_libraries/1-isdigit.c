#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that returns integer
 * @c : parameter
 * Return : 0 (Success)
 */
int _isdigit(int c)
{
	if (c > 0)
	{
		printf("%d", c);
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
