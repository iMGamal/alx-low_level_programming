#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - function
 * @s : empty string
 * @return : palindrome
 */
int is_palindrome(char *s)
{
	if (*s < 0 || *s == 0)
	{
		return (0);
	}
	else if (is_palindrome(s) == is_palindrome(s + 1))
	{
		return (1);
	}
	return (is_palindrome(s + 1));
}
