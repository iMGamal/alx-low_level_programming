#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n;

	n = 97;
	while (n < 123)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
