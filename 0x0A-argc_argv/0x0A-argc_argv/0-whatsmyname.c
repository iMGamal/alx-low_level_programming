#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

/**
 * main - program that prints its name
 * @argc : number of arguments
 * @argv[] : array of pointers to strings
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	(void)argc;
	return (0);
}
