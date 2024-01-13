#include <stdio.h>
/**
 * main - Entry point
 * argc - number of arguments supplied to main
 * argv[] - array of pointers to strings
 */
void main(int argc, char *argv[])
{
	int i;

	if (i < argc && argv[argc] == NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
