#include<stdio.h>
#include<stdlib.h>

/**
 * main - write a function that prints a name
 * @name: printf
 * @(*f): pointer to a finction
 * *
 * Return: Always(0).
 */

void print_name(char *name, void (*f)(char *));
{
	printf("name\n", *f)
}
