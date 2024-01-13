#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints number of arguments passed into it
 * @argc: number of arguments
 * @argv[]: array of pointers to strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[argc] == NULL)
	{
		printf("%d\n", argc);
		return (0);
	}
	return (0);
}
