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
	int x, y, result;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	if (argc <= 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
	return (0);
}
