#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * argc - Number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;

	__attribute__((unused))int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = atoi(argv[1]) * atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
