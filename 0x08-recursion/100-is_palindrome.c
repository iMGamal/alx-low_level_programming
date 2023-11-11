#include"main.h"

/**
 * is_palindrome - returns a palindrome string
 * @s : input
 * Rerurn: palindrome of s
 */
int is_palindrome(char *s)
{
	int i = 131;
	
	if (*s < 0)
	{
		return (0);
	}
	else if (*s == int i)
	{
		return (1);
	}
	return (s * is_palindrome(s - 1));
}
