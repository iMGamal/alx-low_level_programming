#include<stdio.h>
/**
 * main - Entry point
 * argc - number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[argc] == NULL)
	{
		printf("%s\n", argv[argc - 1]);
		argv++;
		return (0);
	}
	return (0);
}
