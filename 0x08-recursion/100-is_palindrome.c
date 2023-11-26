#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - function
 * @s : empty string
 * @return : palindrome
 */
int is_palindrome(char *s)
{
	int palindrome = is_palindrome(s - 1);

	if (*s < 0 || *s == 0)
	{
		return (0);
	}
	if (*s == palindrome)
	{
		return (1);
	}
	return (0);
}
