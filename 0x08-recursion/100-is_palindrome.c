#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome - function
 * @s : empty string
 * @return : palindrome
 */
int is_palindrome(char *s)
{
	int rev_palindrome = 0;

	int palindrome = strlen(s) - 1;

	if (*s < 0 || *s == 0)
	{
		return (0);
	}
	if (s[rev_palindrome++] != s[palindrome--] || s[rev_palindrome++] != palindrome)
	{
		return (0);
	}
	return (1);
}
