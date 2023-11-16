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
		printf("%s \n", s);
		return;
	}
	else if (s != 0)
	{
		printf("%s ", s);
		return;
	}
	else
	{
		printf("%s \n",s - 1);
		return;
	}
		return;
}
