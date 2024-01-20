#include <stdio.h>

/**
 * main - Entry point
 * argc - Number of arguments
 * argv - array of pointers to strings
 * Return - Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	x = argv[1][0] - '0';
	y = argv[2][0] - '0';
	result = x * y;
	if (argc != 3)
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
