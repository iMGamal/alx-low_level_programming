#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n, x;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	x = 97;
	while (x < 103)
	{
		putchar(x);
		x++;
	}	
	putchar(10);
	return (0);
}
