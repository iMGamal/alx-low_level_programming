#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n;

	n = 122;
	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
