#include <stdio.h>
/**
 * main - Entry point
 * argc - number of arguments supplied to main
 * argv[] - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc && argv[argc] == NULL)
	{
		printf("%s\n", argv[i]);
		i++;
		return (0);
	}
	return (0);
}
