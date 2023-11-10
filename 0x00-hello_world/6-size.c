#include<stdio.h>

/**
 * main - a program that prints size of types
 * @char: data type with 1 byte size
 * @short: data type with 2 bytes size
 * @float: data type with 4 bytes size
 * @double: data type with 8 bytes size
 * Return: (0)
 */
int main(void)
{
	printf("print size of char,%c\n",sizeof(char));
	printf("print size of short,%hd\n",sizeof(short));
	printf("print size of float,%f\n",sizeof(float));
	printf("print size of double,%lf\n",sizeof(double));
	return (0);
}
