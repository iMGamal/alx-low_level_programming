#include<stdio.h>
/**
 * main - Prints all arguments that it receives
 * argc - number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++);
	printf("%s\n", argv[i]);
	return (0);
}
