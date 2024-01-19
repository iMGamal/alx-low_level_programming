#include<stdio.h>
/**
 * main - Prints all arguments that it receives
 * argc - number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	printf("%s\n", argv[argc - 1]);
	return (0);
}
