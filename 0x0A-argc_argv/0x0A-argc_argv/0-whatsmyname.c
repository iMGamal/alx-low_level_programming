#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

/**
 * main - program that prints its name
 * @argc : number of arguments
 * @argv[] : array of pointers to strings
 * Return : 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
