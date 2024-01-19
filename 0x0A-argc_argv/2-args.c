#include<stdio.h>
/**
 * main - Entry point
 * argc - number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	argv[0++];
	return (0);
}
