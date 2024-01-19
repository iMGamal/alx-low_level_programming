#include<stdio.h>
/**
 * main - Entry point
 * argc - number of passed arguments
 * argv[] - array of pointers to strings
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
