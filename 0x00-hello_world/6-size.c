#include<stdio.h>

/**
 * main - a program that prints size of types
 * Return: (0)
 */
int main(void)
{
	printf("print size of char, %c\n",sizeof(char));
	printf("print size of short, %hd\n",sizeof(short));
	printf("print size of float, %f\n",sizeof(float));
	printf("print size of double, %lf\n",sizeof(double));
	return (0);
}
