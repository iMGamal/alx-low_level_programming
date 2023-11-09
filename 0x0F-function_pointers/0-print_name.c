#include"function_pointers.h"

/**
 * main - write a function that prints a name
 * @name: printf
 * @(*f): pointer to a function
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
