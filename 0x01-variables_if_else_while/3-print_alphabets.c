#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n, x;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	x = 65;
	while (x < 91)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
