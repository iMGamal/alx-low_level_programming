#include<stdio.h>
/**
 * main - Entry point
 * argc - number of arguments
 * argv[] - array of pointers to strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > i && argv[argc] == NULL)
	{
		printf("%s\n", argv[argc - 1]);
		i++;
		return (0);
	}
	return (0);
}
