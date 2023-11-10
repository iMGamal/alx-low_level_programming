#include<stdio.h>

/**
 * main - a program that prints size of types
 * Return: (0)
 */
int main(void)
{
	printf("size of char,%c\n", sizeof(char));
	printf("size of int,%d\n", sizeof(int));
	printf("size of long int,%ld\n", sizeof(long int));
	printf("size of long long int,%lld\n", sizeof(long long));
	printf("print size of float,%f\n", sizeof(float));
	return (0);
}
