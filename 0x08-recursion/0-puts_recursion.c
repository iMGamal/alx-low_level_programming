 #include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - function that prints a string
 * @char * : data input
 * @s : string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == 0)
	{
		puts(s);
		return;
	}
	else if (s != 0)
	{
		puts(s);
		return;
	}
	else
	{
		puts(s + 1);
		return;
	}
		return;
}
