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
	if (*s == '\0')
	{
		printf("character string %s", s);
		return;
	}
	else
	{
		printf("character string %s\n",s);
		return;
	}
	return;
}
