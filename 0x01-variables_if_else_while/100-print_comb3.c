#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n, x;

	for (n = 48; n < 58; n++)
	{
		for (x = n + 1; x < 58; x++)
		{
			putchar(n);
			putchar(x);
			if (n != 56)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
